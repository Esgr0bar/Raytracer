/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** BuildCamera
*/

#ifndef BuildCamera_HPP_
#define BuildCamera_HPP_

#include "ABuilder.hpp"
#include "../Camera.hpp"

namespace RayTracer {
    /**
     * @brief Class for the builder of the Camera
     * 
     */
    class BuildCamera : virtual public ABuilder {
    public:
        /**
         * @brief Construct a new Build Camera object
         * 
         */
        BuildCamera();
        
        /**
         * @brief Destroy the Build Camera object
         * 
         */
        ~BuildCamera() override;

        /**
         * @brief Set the Position object
         * 
         * @param pos Position to set
         */
        void setPosition(Utils::Point pos) override;

        /**
         * @brief Set the Resolution object
         * 
         * @param width Width to set
         * @param height Heigth to set
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

        /**
         * @brief Get the Result object
         * 
         * @return Camera object built
         */
        Camera getResult();
    protected:
    private:
        Camera _result;
    };
};

#endif /* !BuildCamera_HPP_ */
