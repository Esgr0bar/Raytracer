/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Ray.hpp
*/

#ifndef _RAY_
#define _RAY_

#include "Vector3D.hpp"
#include "Utils.hpp"

namespace Math {
    /**
     * @brief Class for the Ray
     * 
     */
    class Ray {
        public:
            /**
             * @brief Construct a new Ray object
             * 
             * @param start Start of the ray
             * @param vec Vector of the ray
             */
            Ray(Utils::Pixel start, Vector3D vec);

            /**
             * @brief Destroy the Ray object
             * 
             */
            ~Ray() {}

            Utils::Pixel _start;
            Vector3D _dir;
    };
};

#endif
