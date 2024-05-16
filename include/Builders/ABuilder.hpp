/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** ABuilder
*/

#ifndef ABUILDER_HPP_
#define ABUILDER_HPP_

#include "../Primitives/APrimitives.hpp"
#include "IBuilder.hpp"

namespace RayTracer {
    /**
     * @brief Abstract class for the builder of the objects
     * 
     */
    class ABuilder : virtual public IBuilder {
    public:
        /**
         * @brief Destroy the ABuilder object
         * 
         */
        ~ABuilder() override = default;

        /**
         * @brief Reset the builder with an empty object
         * 
         */
        void reset() override {};

        /**
         * @brief Set the Position object
         * 
         * @param pos Position to set
         */
        void setPosition(Utils::Point pos) override;

        /**
         * @brief Set the Size object
         * 
         * @param size Size to set
         */
        void setSize(float size) override;

        /**
         * @brief Set the Color object
         * 
         * @param color Color to set
         */
        void setColor(Utils::Color color) override;

        /**
         * @brief Set the Material object
         * 
         * @param material Material to set
         */
        void setMaterial(int material) override;

        /**
         * @brief Set the Resolution object
         * 
         * @param width Width to set
         * @param height Height to set
         */
        void setResolution(int width, int height) override;

        /**
         * @brief Set the Rotation object
         * 
         * @param rot Rotation to set
         */
        void setRotation(Utils::Point rot) override;

        /**
         * @brief Set the Fov object
         * 
         * @param fov Fov to set
         */
        void setFov(int fov) override;

    protected:
    private:
    };
};

#endif /* !ABUILDER_HPP_ */
