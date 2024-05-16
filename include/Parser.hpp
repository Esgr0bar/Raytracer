/*
** EPITECH PROJECT, 2023
** RayTracer
** File description:
** main.cpp
*/

#ifndef _PARSER_
#define _PARSER_

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <libconfig.h++>
#include <vector>
#include "Factory.hpp"

namespace RayTracer {
    class Factory;
    /**
     * @brief Parser class
     *
     */
    class Parser {
        public:
            Factory _factory;
            /**
             * @brief Construct a new Parser object
             *
             * @param factory Factory
             */
            Parser(Factory factory);
            ~Parser();
            /**
             * @brief Exception class for Parser
             *
             */
            class ExceptionRay : public std::exception {
                public:
                /**
                 * @brief Construct a new Exception Ray object
                 *
                 * @param msg Message to display
                 */
                ExceptionRay(std::string msg) : _msg(msg){};

                /**
                 * @brief Return the message
                 *
                 * @return const char* Message
                 */
                const char *what() const noexcept {return _msg.c_str();};
                private:
                std::string _msg;
            };
            /**
             * @brief Parse the file passed as parameter
             *
             * @param file File to parse
             */
            void parse(std::string file);
        protected:
            /**
             * @brief Open the file to start parsing
             *
             * @param filename File to open
             */
            void openFile(std::string filename);
            /**
             * @brief Parse camera values in config file and create it
             *
             */
            void parseCamera(void);
            /**
             * @brief Parse lights values in config file and create them
             *
             */
            void parseLights(void);
            void parsePointLight(std::string path);
            /**
             * @brief Parse primitives values in config file and create them
             *
             */
            void parsePrimitives(void);
            /**
             * @brief Sub function of parsePrimitives that parses spheres
             *
             * @param path Path to access sphere values
             */
            void parseSphere(std::string path);

            libconfig::Config _cfg;
            // Factory _factory;
    };
}
#endif
