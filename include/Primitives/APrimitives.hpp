/*
** EPITECH PROJECT, 2022
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** APrimitives.hpp
*/

#ifndef _A_PRIMITIVES_
#define _A_PRIMITIVES_

#include "IPrimitives.hpp"
#include <vector>
#include <cmath>

namespace RayTracer {
    /**
     * @brief Abstract Class for the Primitives
     * 
     */
    class APrimitives : virtual public IPrimitives {
        public:
            /**
             * @brief Construct a new APrimitives object
             * 
             */
            APrimitives() {}
            
            /**
             * @brief Destroy the APrimitives object
             * 
             */
            ~APrimitives() {}

            /**
                * @brief Get the pixel at the specified coordonates
                * 
                * @param i X position
                * @param j Y position
                * @return Utils::Pixel Pixel at the specified coordonates
            */
            Utils::Pixel computeColor(int i,int j) override;

            /**
             * @brief Create the pixels of the primitive
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

            Utils::Point _pos;
            float _size;
            float _radius;
            int _material;
            Utils::Color _color;
            std::vector<Utils::Pixel> _pixels;
        protected:
        private:
    };
};

#endif
