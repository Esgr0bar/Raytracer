/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Camera
*/

#ifndef CAMERA_HPP_
#define CAMERA_HPP_

#include "Primitives/IPrimitives.hpp"

namespace RayTracer {
    /**
     * @brief Class for the Camera
     * 
     */
    class Camera {
    public:
        /**
         * @brief Construct a new Camera object
         * 
         */
        Camera();
        
        /**
         * @brief Destroy the Camera object
         * 
         */
        ~Camera();

        int width;
        int height;
        Utils::Point position;
        Utils::Point rotation;
        int fov;
    protected:
    private:
    };
};

#endif /* !CAMERA_HPP_ */
