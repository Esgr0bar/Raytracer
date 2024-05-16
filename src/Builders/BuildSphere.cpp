/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** BuildSphere
*/

#include "BuildSphere.hpp"

RayTracer::BuildSphere::BuildSphere()
{
    _result = Sphere();
}

RayTracer::BuildSphere::~BuildSphere()
{
}

void RayTracer::BuildSphere::reset()
{
    _result = Sphere();
}

void RayTracer::BuildSphere::setPosition(Utils::Point pos)
{
    _result._pos = pos;
}

void RayTracer::BuildSphere::setSize(float size)
{
    _result._size = size;
    _result._radius = _result._size * _result._size;
}

void RayTracer::BuildSphere::setColor(Utils::Color color)
{
    _result._color = color;
}

void RayTracer::BuildSphere::setMaterial(int material)
{
    _result._material = material;
}

RayTracer::Sphere RayTracer::BuildSphere::getResult()
{
    return _result;
}