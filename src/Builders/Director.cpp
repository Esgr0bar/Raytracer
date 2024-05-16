/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Director
*/

#include "Director.hpp"

RayTracer::Director::Director()
{
}

RayTracer::Director::~Director()
{
}

void RayTracer::Director::setBuilder(std::shared_ptr<ABuilder> builder)
{
    _builder = builder;
}

// Arguments required for sphere : x, y, z, size, r, g, b, material
void RayTracer::Director::makePrimitive(std::string type, std::vector<float> args)
{
    if (type == "sphere") {
        _builder->setPosition({args[0], args[1], args[2]});
        _builder->setSize(args[3]);
        _builder->setColor({args[4], args[5], args[6]});
        _builder->setMaterial(args[7]);
    }
}

// Arguments required for camera : x, y, z, rotX, rotY, rotZ, width, height, fov
void RayTracer::Director::makeCamera(std::vector<float> args)
{
    _builder->setPosition({args[0], args[1], args[2]});
    _builder->setRotation({args[3], args[4], args[5]});
    _builder->setResolution(args[6], args[7]);
    _builder->setFov(args[8]);
}

// Arguments required for light : x, y, z
void RayTracer::Director::makeLight(std::vector<float> args)
{
    _builder->setPosition({args[0], args[1], args[2]});
}