/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Ray.cpp
*/

#include "../../include/Math/Ray.hpp"

Math::Ray::Ray(Utils::Pixel start, Vector3D vec)
{
    _start = start;
    _dir = vec;
}
