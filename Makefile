##
## EPITECH PROJECT, 2022
## B-OOP-400-PAR-4-1-tekspice-lucas.guiard
## File description:
## Makefile
##

SRC	=	src/Primitives/Shapes/Sphere.cpp			\
		src/Primitives/APrimitives.cpp				\
		src/Builders/ABuilder.cpp					\
		src/Builders/Director.cpp					\
		src/Builders/BuildSphere.cpp				\
		src/Builders/BuildCamera.cpp				\
		src/Builders/BuildLightPoint.cpp			\
		src/Lights/LightPoint.cpp					\
		src/Math/Ray.cpp							\
		src/Math/Vector3D.cpp						\
		src/Camera.cpp								\
		src/Main.cpp								\
		src/Factory.cpp								\
		src/Parser.cpp


CC = g++

CFLAG = -Wall -Wextra

CPPFLAG = -std=c++2a -I ./include/ -I ./include/Primitives/ -I ./include/Primitives/Shapes -I ./include/Builders -I ./include/Lights/ -Wall -Wextra -Werror -lconfig++ `pkg-config --cflags libconfig` `pkg-config --libs libconfig`

NAME = raytracer

all:
	$(CC) -o $(NAME) $(SRC) $(CFLAG) $(CPPFLAG)
clean:
	$(RM) *.gc*

fclean: clean
	$(RM) $(NAME)

debug: $(CPPFLAG) += -g3
debug: re

re: fclean all

doc:
	doxygen doc/Doxyfile

.PHONY: all clean fclean debug re tests_run doc