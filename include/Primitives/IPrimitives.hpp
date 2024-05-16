/*
** EPITECH PROJECT, 2022
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** IPrimitives.hpp
*/

#ifndef _I_PRIMITIVES_
#define _I_PRIMITIVES_

#include "../Math/Ray.hpp"

namespace RayTracer {
    /**
     * @brief Interface for the primitives
     * 
     */
    class IPrimitives {
        public:
            /**
             * @brief Destroy the IPrimitives object
             * 
             */
            virtual ~IPrimitives() = default;

            /**
             * @brief Compute the color of the primitive at a specific position
             * 
             * @param i x position
             * @param j y position
             * @return Utils::Pixel Pixel computed at the specified position
             */
            virtual Utils::Pixel computeColor(int i,int j) = 0;

            /**
             * @brief Create the pixels of the primitive
             * 
             */
            virtual void createPixels() = 0;

            /**
             * @brief Check if the primitive is hit by a ray
             * 
             * @param ray Ray to check
             * @param start Start of the ray
             * @return true The primitive is hit
             * @return false The primitive is not hit
             */
            virtual bool isHit(Math::Ray ray, float &start) = 0;
        protected:
        private:
    };
};

#endif
