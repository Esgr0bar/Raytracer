/*
** EPITECH PROJECT, 2023
** RayTracer
** File description:
** main.cpp
*/

#include "Parser.hpp"

using namespace RayTracer;

Parser::Parser(Factory factory) : _factory(factory)
{
}

Parser::~Parser()
{
}

void Parser::openFile(std::string filename)
{
    _cfg.readFile(filename.c_str());
}

void Parser::parse(std::string file)
{
    try {
        openFile(file);
        parseCamera();
        parsePrimitives();
        parseLights();
    } catch (const std::exception &e) {
        throw ExceptionRay(e.what());
    }
}

void Parser::parseCamera(void)
{
    std::vector<std::string> listPath = {"position.x", "position.y", "position.z", "rotation.x", "rotation.y", "rotation.z", "resolution.width", "resolution.height", "fieldOfView"};
    std::vector<float> camValues;
    int intVal;
    float floatVal;

    for (auto name : listPath) {
        if (!_cfg.lookupValue("camera." + name, intVal)) {
            if (!_cfg.lookupValue("camera." + name, floatVal)) {
                floatVal = name == ".resolution.width" ?
                1920 : name == ".resolution.height" ?
                1080 : name == ".fieldOfView" ? 72 : 0;
            }
        } else {
            floatVal = intVal;
        }
        camValues.push_back(floatVal);
    }
    _factory.createCamera(camValues);
}

// x, y, z, size, r, g, b, material
void Parser::parseSphere(std::string path)
{
    std::vector<std::string> listPath = {".x", ".y", ".z", ".r", ".color.r", ".color.g", ".color.b", ".material"};
    std::vector<float> sphereValues;
    int intVal;
    float floatVal;

    for (auto name : listPath) {
        if (!_cfg.lookupValue(path + name, intVal)) {
            if (!_cfg.lookupValue(path + name, floatVal)) {
                floatVal = name == ".material" ? 1.0 : 0.0;
            }
        } else {
            floatVal = intVal;
        }
        sphereValues.push_back(floatVal);
    }
    _factory.createPrimitive("sphere", sphereValues);
}

void Parser::parsePrimitives(void)
{
    std::vector<std::string> listPrim = {"spheres"};
    int i;

    for (auto name : listPrim) {
        i = 0;
        while (1) {
            int checker;
            if (!_cfg.lookupValue("primitives." + name + ".[" + std::to_string(i) + "].x", checker)) {
                break;
            }
            if (name == "spheres")
                parseSphere("primitives." + name + ".[" + std::to_string(i) + "]");
            i++;
        }
    }
}

void Parser::parseLights(void)
{
    std::vector<std::string> listPrim = {"point"};
    int i;
    float coef;

    if (!_cfg.lookupValue("lights.ambient", coef))
        coef = 0.4;
    _factory._ambientLight = coef;
    if (!_cfg.lookupValue("lights.diffuse", coef))
        coef = 0.6;
    _factory._diffuseLight = coef;
    for (auto name : listPrim) {
        i = 0;
        while (1) {
            int checker;
            if (!_cfg.lookupValue("lights." + name + ".[" + std::to_string(i) + "].x", checker)) {
                break;
            }
            if (name == "point")
                parsePointLight("lights." + name + ".[" + std::to_string(i) + "]");
            i++;
        }
    }
}

void Parser::parsePointLight(std::string path)
{
    std::vector<std::string> listPath = {".x", ".y", ".z"};
    std::vector<float> pointValues;
    int intVal;
    float floatVal;

    for (auto name : listPath) {
        if (!_cfg.lookupValue(path + name, intVal)) {
            if (!_cfg.lookupValue(path + name, floatVal)) {
                floatVal = 0;
            }
        } else {
            floatVal = intVal;
        }
        pointValues.push_back(floatVal);
    }
    _factory.createLight(pointValues);
}