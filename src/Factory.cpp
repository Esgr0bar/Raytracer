/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Factory
*/

#include "Factory.hpp"

RayTracer::Factory::Factory()
{
    _director = Director();
}

RayTracer::Factory::~Factory()
{
}

void RayTracer::Factory::createPrimitive(std::string type, std::vector<float> args)
{
    if (type == "sphere") {
        RayTracer::Sphere sphere;
        std::shared_ptr<BuildSphere> builder(new BuildSphere);
        _director.setBuilder(builder);
        _director.makePrimitive(type, args);
        sphere = builder->getResult();
        sphere.createPixels();
        _primitives.push_back(sphere);
    }
}

void RayTracer::Factory::createCamera(std::vector<float> args)
{
    std::shared_ptr<BuildCamera> builder(new BuildCamera);

    _director.setBuilder(builder);
    _director.makeCamera(args);
    _camera = builder->getResult();
}

void RayTracer::Factory::createLight(std::vector<float> args)
{
    std::shared_ptr<BuildLightPoint> builder(new BuildLightPoint);

    _director.setBuilder(builder);
    _director.makeLight(args);
    _lights.push_back(builder->getResult());
}