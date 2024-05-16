/*
** EPITECH PROJECT, 2022
** B-OOP-400-PAR-4-1-raytracer-jules.gresset
** File description:
** Utils.hpp
*/

#ifndef _UTILS_
#define _UTILS_

namespace Utils {
    /**
     * @brief Point structure
     * 
     */
    struct Point {
        float _x; //!< X coordinate
        float _y; //!< Y coordinate
        float _z; //!< Z coordinate
    };
    /**
     * @brief Color structure
     * 
     */
    struct Color {
        float _r; //!< Red value
        float _g; //!< Green value
        float _b; //!< Blue value
    };
    /**
     * @brief Pixel structure
     * 
     */
    struct Pixel {
        Point _pos; //!< Position of the pixel
        Color _color; //!< Color of the pixel
    };
};

#endif
