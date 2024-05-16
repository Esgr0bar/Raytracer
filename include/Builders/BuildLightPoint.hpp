/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** BuildLightPoint
*/

#ifndef BUILDLIGHTPOINT_HPP_
#define BUILDLIGHTPOINT_HPP_

#include "ABuilder.hpp"
#include "../Lights/LightPoint.hpp"

namespace RayTracer {
    /**
     * @brief Class for the builder of the LightPoint
     * 
     */
    class BuildLightPoint : virtual public ABuilder {
    public:
        /**
         * @brief Construct a new Build Light Point object
         * 
         */
        BuildLightPoint();
        
        /**
         * @brief Destroy the Build Light Point object
         * 
         */
        ~BuildLightPoint() override;

        /**
         * @brief Set the Position object
         * 
         * @param pos Position to set
         */
        void setPosition(Utils::Point pos) override;

        /**
         * @brief Get the Result object
         * 
         * @return LightPoint built
         */
        LightPoint getResult();
    protected:
    private:
        LightPoint _result;
    };
};

#endif /* !BUILDLIGHTPOINT_HPP_ */
