/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Vector3D.hpp
*/

#ifndef _VECTOR3D_
#define _VECTOR3D_

#include <cmath>
#include "Utils.hpp"

namespace Math {
    /**
     * @brief Class for the Vector3D
     * 
     */
    class Vector3D {
        public:
            /**
             * @brief Construct a new Vector 3D object
             * 
             * @param x X value
             * @param y Y value
             * @param z Z value
             */
            Vector3D(double x=0, double y=0, double z=0);

            /**
             * @brief Construct a new Vector 3D object
             * 
             * @param v Vector to copy
             */
            Vector3D(Vector3D &v);

            /**
             * @brief Destroy the Vector 3D object
             * 
             */
            ~Vector3D() {}

            /**
             * @brief Get the X value
             * 
             * @return double X value
             */
            double getX(void);

            /**
             * @brief Get the Y value
             * 
             * @return double Y value
             */
            double getY(void);

            /**
             * @brief Get the Z value
             * 
             * @return double Z value
             */
            double getZ(void);

            /**
             * @brief Get the Length of the vector
             * 
             * @return double Length of the vector
             */
            double length(void);

            /**
             * @brief Copy a vector
             * 
             * @param v Vector to copy
             */
            void operator=(Vector3D &v);

            /**
             * @brief Add a vector to the current vector
             * 
             * @param v Vector to add
             */
            void operator+=(Vector3D &v);

            /**
             * @brief Substract a vector to the current vector
             * 
             * @param v Vector to substract
             */
            void operator-=(Vector3D &v);

            /**
             * @brief Multiply a vector to the current vector
             * 
             * @param v Vector to multiply
             */
            void operator*=(Vector3D &v);

            /**
             * @brief Divide a vector to the current vector
             * 
             * @param v Vector to divide
             */
            void operator/=(Vector3D &v);

            /**
             * @brief Multiplu the current vector by a value
             * 
             * @param v Value to multiply
             */
            void operator*=(double v);

            /**
             * @brief Divide the current vector by a value
             * 
             * @param v Value to divide
             */
            void operator/=(double v);

            double dot(Vector3D &v);
            double _x;
            double _y;
            double _z;
        protected:
    };
};

void operator+(Utils::Pixel &p, Math::Vector3D &v);

#endif
