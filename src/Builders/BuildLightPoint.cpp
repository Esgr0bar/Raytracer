/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** BuildLightPoint
*/

#include "BuildLightPoint.hpp"

RayTracer::BuildLightPoint::BuildLightPoint()
{
}

RayTracer::BuildLightPoint::~BuildLightPoint()
{
}

void RayTracer::BuildLightPoint::setPosition(Utils::Point pos)
{
    _result._pos._pos = pos;
}

RayTracer::LightPoint RayTracer::BuildLightPoint::getResult()
{
    return _result;
}