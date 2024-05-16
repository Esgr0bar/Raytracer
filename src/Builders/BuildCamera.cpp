/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** BuildCamera
*/

#include "BuildCamera.hpp"

RayTracer::BuildCamera::BuildCamera()
{
}

RayTracer::BuildCamera::~BuildCamera()
{
}

void RayTracer::BuildCamera::setPosition(Utils::Point pos)
{
    _result.position = pos;
}

void RayTracer::BuildCamera::setResolution(int width, int height)
{
    _result.width = width;
    _result.height = height;
}

void RayTracer::BuildCamera::setRotation(Utils::Point rot)
{
    _result.rotation = rot;
}

void RayTracer::BuildCamera::setFov(int fov)
{
    _result.fov = fov;
}

RayTracer::Camera RayTracer::BuildCamera::getResult()
{
    return _result;
}