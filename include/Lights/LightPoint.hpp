/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** LightPoint
*/

#ifndef LIGHTPOINT_HPP_
#define LIGHTPOINT_HPP_

#include "../Primitives/IPrimitives.hpp"

namespace RayTracer {
    /**
     * @brief Class for the LightPoint
     * 
     */
    class LightPoint {
    public:
        /**
         * @brief Construct a new Light Point object
         * 
         */
        LightPoint();
        
        /**
         * @brief Destroy the Light Point object
         * 
         */
        ~LightPoint();

        Utils::Pixel _pos;
    private:
    };
};

#endif /* !LIGHTPOINT_HPP_ */
