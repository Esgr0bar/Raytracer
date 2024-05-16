/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Vector3D.cpp
*/

#include "../../include/Math/Vector3D.hpp"

Math::Vector3D::Vector3D(double x, double y, double z)
{
    _x = x;
    _y = y;
    _z = z;
}

Math::Vector3D::Vector3D(Vector3D &v)
{
    _x = v.getX();
    _y = v.getY();
    _z = v.getZ();
}

void Math::Vector3D::operator=(Vector3D &v)
{
    this->_x = v.getX();
    this->_y = v.getY();
    this->_z = v.getZ();
}
void Math::Vector3D::operator+=(Vector3D &v)
{
    this->_x = this->_x + v.getX();
    this->_y = this->_y + v.getY();
    this->_z = this->_z + v.getZ();
}
// const Math::Vector3D &Math::Vector3D::operator+(Vector3D &v)
// {
//     double x = this->_x + v.getX();
//     double y = this->_y + v.getY();
//     double z = this->_z + v.getZ();
//     Math::Vector3D newv(x, y, z);
//     return (newv);
// }
void Math::Vector3D::operator-=(Vector3D &v)
{
    this->_x = this->_x - v.getX();
    this->_y = this->_y - v.getY();
    this->_z = this->_z - v.getZ();
}
// const Math::Vector3D &Math::Vector3D::operator-(Vector3D &v)
// {
//     double x = this->_x - v.getX();
//     double y = this->_y - v.getY();
//     double z = this->_z - v.getZ();
//     return (Math::Vector3D(x,y,z));
// }
void Math::Vector3D::operator*=(Vector3D &v)
{
    this->_x = this->_x * v.getX();
    this->_y = this->_y * v.getY();
    this->_z = this->_z * v.getZ();
}
// const Math::Vector3D &Math::Vector3D::operator*(Vector3D &v)
// {
//     double x = this->_x * v.getX();
//     double y = this->_y * v.getY();
//     double z = this->_z * v.getZ();
//     return (Math::Vector3D(x,y,z));
// }
void Math::Vector3D::operator/=(Vector3D &v)
{
    this->_x = this->_x / v.getX();
    this->_y = this->_y / v.getY();
    this->_z = this->_z / v.getZ();
}
// const Math::Vector3D &Math::Vector3D::operator/(Vector3D &v)
// {
//     double x = this->_x / v.getX();
//     double y = this->_y / v.getY();
//     double z = this->_z / v.getZ();
//     return (Math::Vector3D(x,y,z));
// }
// const Math::Vector3D &Math::Vector3D::operator*(double v)
// {
//     double x = this->_x * v;
//     double y = this->_y * v;
//     double z = this->_z * v;
//     return (Math::Vector3D(x,y,z));
// }
// const Math::Vector3D &Math::Vector3D::operator/(double v)
// {
//     double x = this->_x / v;
//     double y = this->_y / v;
//     double z = this->_z / v;
//     return (Math::Vector3D(x,y,z));
// }
void Math::Vector3D::operator*=(double v)
{
    this->_x = this->_x * v;
    this->_y = this->_y * v;
    this->_z = this->_z * v;
}
void Math::Vector3D::operator/=(double v)
{
    this->_x = this->_x / v;
    this->_y = this->_y / v;
    this->_z = this->_z / v;
}
double Math::Vector3D::dot(Vector3D &v)
{
    return ((_x * v.getX()) + (_y * v.getY()) + (_z * v.getZ()));
}

double Math::Vector3D::getX(void)
{
    return (this->_x);
}
double Math::Vector3D::getY(void)
{
    return (this->_y);
}
double Math::Vector3D::getZ(void)
{
    return (this->_z);
}
double Math::Vector3D::length(void)
{
    return (sqrt((pow(_x, 2)) + (pow(_y, 2)) + (pow(_z, 2))));
}

void operator+(Utils::Pixel &p, Math::Vector3D &v)
{
    p._pos._x += v.getX();
    p._pos._y += v.getY();
    p._pos._z += v.getZ();
}
