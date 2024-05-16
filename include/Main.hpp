/*
** EPITECH PROJECT, 2023
** RayTracer
** File description:
** main.cpp
*/

#ifndef _MAIN_
#define _MAIN_

#include <fstream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iostream>
#include <assert.h>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include "IPrimitives.hpp"

/**
 * @brief Namespace for the RayTracer
 * 
 */
namespace RayTracer {};

/**
 * @brief Namespace for the Math
 * 
 */
namespace Math {};

/**
 * @brief Namespace for the Utils
 * 
 */
namespace Utils {};

/**
 * @brief Structure for the Image
 * 
 */
typedef struct Image
{
	int w,h;
	Utils::Pixel* dat;
} Image;

/**
 * @brief Class for the Image
 * 
 */

class Img
{
    public:
        /**
         * @brief Construct a new Img object
         * 
         */
        Img();
        
        /**
         * @brief Destroy the Img object
         * 
         */
        ~Img();

        /**
         * @brief Save the image
         * 
         * @param img Image to save
         * @param file File to save
         * @return int 0 if success
         */
        int save(Image*,std::string file);

        /**
         * @brief Create a new Img object
         * 
         * @param w Width
         * @param h Height
         * @return Image* Image created
         */
        Image* newImg(int w,int h);

        /**
         * @brief Copy the image
         * 
         * @param img Image to copy
         * @return Image* Image copied
         */
        Image* cpyImg(Image*);

        /**
         * @brief Set a Pixel at the positon in the image
         * 
         * @param img Image
         * @param i X
         * @param j Y
         * @param p Pixel
         */
        void setPixel(Image*,int i,int j,Utils::Pixel p);

        /**
         * @brief Set the Background object
         * 
         * @param img Image
         * @param i X
         * @param j Y
         * @param p Pixel
         */
        void setBackGround(Image*,int i, int j,Utils::Pixel p);

        /**
         * @brief Get the Pixel object at the position
         * 
         * @param img Image
         * @param i X
         * @param j Y
         * @return Utils::Pixel Pixel
         */
        Utils::Pixel getPixel(Image*,int i,int j);

        /**
         * @brief Delete the Img object
         * 
         * @param img Image to delete
         */
        void delImg(Image*);
        protected:
            Image *img;
            Utils::Pixel *pixel;
};

#endif
