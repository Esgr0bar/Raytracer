/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** BuildSphere
*/

#ifndef BUILDSPHERE_HPP_
#define BUILDSPHERE_HPP_

#include "ABuilder.hpp"
#include "../Primitives/IPrimitives.hpp"
#include "../Primitives/Shapes/Sphere.hpp"

namespace RayTracer {
    /**
     * @brief Class for the builder of the Sphere
     * 
     */
    class BuildSphere : virtual public ABuilder {
    public:
        /**
         * @brief Construct a new Build Sphere object
         * 
         */
        BuildSphere();

        /**
         * @brief Destroy the Build Sphere object
         * 
         */
        ~BuildSphere() override;

        /**
         * @brief Reset the builder
         * 
         */
        void reset() override;

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
         * @brief Get the Result object
         * 
         * @return Sphere built
         */
        Sphere getResult();
    protected:
    private:
        Sphere _result;
    };
};

#endif /* !BUILDSPHERE_HPP_ */
