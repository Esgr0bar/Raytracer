/*
** EPITECH PROJECT, 2022
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Sphere.cpp
*/

#include "Sphere.hpp"

RayTracer::Sphere::Sphere()
{
}

float distance(float sx, float sy, float ex, float ey)
{
    float distance = fabs(sqrt(pow(sx - ex, 2) + pow(sy - ey, 2)));
    return distance;
}

void RayTracer::Sphere::createPixels()
{
    float start_x = _pos._x - _size;
    float start_y = _pos._y - _size;
    float end_x = _pos._x + _size;
    float end_y = _pos._y + _size;
    Utils::Pixel tmp;

    for (int i = 0; (i + start_x) < end_x; ++i) {
        for (int j = 0; (j + start_y) < end_y; ++j) {
            if (distance((i + start_x), (j + start_y), _pos._x, _pos._y) <= _size) {
                float distToCenter = distance((i + start_x), (j + start_y), _pos._x, _pos._y);
                float ratio = distToCenter / _size;
                tmp._pos._x = (i + start_x);
                tmp._pos._y = (j + start_y);
                tmp._color._r = _color._r;
                tmp._color._g = _color._g;
                tmp._color._b = _color._b;

                tmp._color._r *= (1 - ratio);
                tmp._color._g *= (1 - ratio);
                tmp._color._b *= (1 - ratio);

                _pixels.push_back(tmp);
            }
        }
    }
}

bool RayTracer::Sphere::isHit(Math::Ray ray, float &start)
{
    Math::Vector3D dist(this->_pos._x - ray._start._pos._x, this->_pos._y - ray._start._pos._y, this->_pos._z - ray._start._pos._z);
    float a = ray._dir.dot(dist);
    float delta = (a * a) - (dist.dot(dist)) + this->_radius;

    if (delta < 0.0f)
        return false;

    const float invSqrtD = 1.0f / sqrtf(delta);
    const float t0 = (a - invSqrtD * sqrtf(delta)) > 0.1f ? a - invSqrtD * sqrtf(delta) : INFINITY;
    const float t1 = (a + invSqrtD * sqrtf(delta)) > 0.1f ? a + invSqrtD * sqrtf(delta) : INFINITY;

    start = std::min(t0, t1);

    return true;
}
