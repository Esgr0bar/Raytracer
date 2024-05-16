/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Director
*/

#ifndef DIRECTOR_HPP_
#define DIRECTOR_HPP_

#include <iostream>
#include <vector>
#include <memory>

#include "ABuilder.hpp"
#include "../Primitives/IPrimitives.hpp"

namespace RayTracer {
    /**
     * @brief Class for the director of the builder
     * 
     */
    class Director {
    public:
        /**
         * @brief Construct a new Director object
         * 
         */
        Director();
    
        /**
         * @brief Destroy the Director object
         * 
         */
        ~Director();

        /**
         * @brief Set the Builder object
         * 
         * @param builder Builder to set
         */
        void setBuilder(std::shared_ptr<ABuilder> builder);

        /**
         * @brief Make a primitive
         * 
         * @param type Type of the primitive
         * @param args Arguments of the primitive
         */
        void makePrimitive(std::string type, std::vector<float> args);

        /**
         * @brief Make a camera
         * 
         * @param args Arguments of the camera
         */
        void makeCamera(std::vector<float> args);

        /**
         * @brief Make a light
         * 
         * @param args Arguments of the light
         */
        void makeLight(std::vector<float> args);
    protected:
    private:
        std::shared_ptr<ABuilder> _builder;
    };
};

#endif /* !DIRECTOR_HPP_ */
