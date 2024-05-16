/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** IBuilder
*/

#ifndef IBUILDER_HPP_
#define IBUILDER_HPP_

#include "../Primitives/APrimitives.hpp"

namespace RayTracer {
    /**
     * @brief Interface for the builder of the objects
     * 
     */
    class IBuilder {
    public:
        /**
         * @brief Destroy the IBuilder object
         * 
         */
        virtual ~IBuilder() = default;

        /**
         * @brief Reset the builder with an empty object
         * 
         */
        virtual void reset() = 0;

        /**
         * @brief Set the Position object
         * 
         * @param pos Position to set
         */
        virtual void setPosition(Utils::Point pos) = 0;
        
        /**
         * @brief Set the Size object
         * 
         * @param size Size to set
         */
        virtual void setSize(float size) = 0;

        /**
         * @brief Set the Color object
         * 
         * @param color Color to set
         */
        virtual void setColor(Utils::Color color) = 0;

        /**
         * @brief Set the Material object
         * 
         * @param material Material to set
         */
        virtual void setMaterial(int material) = 0;

        /**
         * @brief Set the Resolution object
         * 
         * @param width Width of the new object
         * @param height Height of the new object
         */
        virtual void setResolution(int width, int height) = 0;

        /**
         * @brief Set the Rotation object
         * 
         * @param rot Rotation of the new object
         */
        virtual void setRotation(Utils::Point rot) = 0;

        /**
         * @brief Set the Fov object
         * 
         * @param fov Fov of the new object
         */
        virtual void setFov(int fov) = 0;
    protected:
    private:
    };
};

#endif /* !IBUILDER_HPP_ */
