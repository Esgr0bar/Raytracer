/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Factory
*/

#ifndef FACTORY_HPP_
#define FACTORY_HPP_

#include <iostream>
#include <vector>
#include <memory>

#include "APrimitives.hpp"
#include "Director.hpp"

#include "Sphere.hpp"
#include "Camera.hpp"
#include "LightPoint.hpp"

#include "BuildSphere.hpp"
#include "BuildCamera.hpp"
#include "BuildLightPoint.hpp"
namespace RayTracer {
    /**
     * @brief Class for the factory
     * The factory is used to create the primitives, the camera and the lights through the builds with the Director
     *
     */
    class Factory {
    public:
        /**
         * @brief Construct a new Factory object
         * 
         */
        Factory();
        
        /**
         * @brief Destroy the Factory object
         * 
         */
        ~Factory();

       /**
        * @brief Create a primitive
        * @details Create a primitive with the director. The created primitive is then added to the vector of primitives
        * 
        * @param type Type of the primitive
        * @param args Arguments of the primitive
       */
        void createPrimitive(std::string type, std::vector<float> args);

        /**
         * @brief Create a Camera object
         * @details Create a camera with the director. The created camera is then added to the camera attribute
         * 
         * @param args Arguments of the camera
         */
        void createCamera(std::vector<float> args);

        /**
         * @brief Create a Light object
         * @details Create a light with the director. The created light is then added to the vector of lights
         * 
         * @param args Arguments of the light
         */
        void createLight(std::vector<float> args);

        std::vector<RayTracer::APrimitives> _primitives;
        std::vector<RayTracer::LightPoint> _lights;
        Camera _camera;
        float _ambientLight;
        float _diffuseLight;
    protected:
    private:
        //! Director used to create the elements
        Director _director;
    };
};

#endif /* !FACTORY_HPP_ */
