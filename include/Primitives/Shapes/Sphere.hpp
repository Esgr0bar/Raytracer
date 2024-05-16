/*
** EPITECH PROJECT, 2022
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Sphere.hpp
*/

#ifndef _SPHERE_
#define _SPHERE_

#include "../APrimitives.hpp"

namespace RayTracer {
    /**
     * @brief Class for the Sphere
     * 
     */
    class Sphere : virtual public APrimitives {
        public:
            /**
             * @brief Construct a new Sphere object
             * @details The constructor of Sphere class takes no arguments because the all arguments will be set with the builder
             */
            Sphere();
            
            /**
             * @brief Destroy the Sphere object
             * 
             */
            ~Sphere() {}

            /**
             * @brief Create the Pixel associated with the Sphere
             * 
             */
            void createPixels() override;

            /**
             * @brief Check if the primitive is hit by a ray
             * 
             * @param ray Ray to check
             * @param start Start of the ray
             * @return true The primitive is hit
             * @return false The primitive is not hit
             */
            bool isHit(Math::Ray ray, float &start) override;

            float _radius;
        protected:
        private:
    };
};

#endif
