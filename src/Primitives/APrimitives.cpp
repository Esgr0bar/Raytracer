/*
** EPITECH PROJECT, 2022
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Sphere.cpp
*/
#include "APrimitives.hpp"
#include <iostream>

Utils::Pixel RayTracer::APrimitives::computeColor(int i,int j)
{
    Utils::Pixel tmp;

    for (size_t k = 0; k < _pixels.size(); ++k) {
        if (_pixels[k]._pos._x == i && _pixels[k]._pos._y == j) {
            tmp._pos._x = i;
            tmp._pos._y = j;
            tmp._color._r = _pixels[k]._color._r;
            tmp._color._g = _pixels[k]._color._g;
            tmp._color._b = _pixels[k]._color._b;
            return tmp;
        }
    }
    tmp._pos._x = i;
    tmp._pos._y = j;
    tmp._color._r = 0;
    tmp._color._g = 0;
    tmp._color._b = 0;
    return tmp;
}

void RayTracer::APrimitives::createPixels()
{}
bool RayTracer::APrimitives::isHit(Math::Ray ray, float &start)
{
    Math::Vector3D dist(this->_pos._x - ray._start._pos._x, this->_pos._y - ray._start._pos._y, this->_pos._z - ray._start._pos._z);
    float a = dist._x * dist._x + dist._y * dist._y + dist._z * dist._z;
    float b = 2 * dist._x * (ray._start._pos._x - _pos._x) + 2 * dist._y * (ray._start._pos._y - _pos._y) + 2 * dist._z * (ray._start._pos._z - _pos._z);
    _radius = _size * _size;
    float c = _pos._x * _pos._x + _pos._y * _pos._y + _pos._z * _pos._z + ray._start._pos._x * ray._start._pos._x + ray._start._pos._y * ray._start._pos._y + ray._start._pos._z * ray._start._pos._z + (-2) * (_pos._x * ray._start._pos._x + _pos._y * ray._start._pos._y + _pos._z * ray._start._pos._z) - _radius;
    float delta = b * b - 4 * a * c;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    if (delta < 0)
        return false;
    start = (-b - sqrtf(delta)) / (2 * a);
    return true;
}
//     float delta = (a * a) - (dist.dot(dist)) + this->_radius;

//     if (delta < 0.0f)
//         return false;

//     const float invSqrtD = 1.0f / sqrtf(delta);
//     const float t0 = (a - invSqrtD * sqrtf(delta)) > 0.1f ? a - invSqrtD * sqrtf(delta) : INFINITY;
//     const float t1 = (a + invSqrtD * sqrtf(delta)) > 0.1f ? a + invSqrtD * sqrtf(delta) : INFINITY;

//     // const bool retvalue = t0 < start || t1 < start;
//     start = std::min(t0, t1);

//     std::cout << "Je suis Musiquuueeee avec " << start << std::endl;
//     return true;
// }
