/*
** EPITECH PROJECT, 2023
** RayTracer
** File description:chien
** main.cpp
*/

#include "Main.hpp"
#include "Factory.hpp"
#include "Sphere.hpp"
#include "Parser.hpp"


float chien = -2000;

Img::Img()
{
}

Img::~Img()
{

}

Image* Img::newImg(int w,int h)
{
    Image* I = new Image;
    I->w = w;
    I->h = h;
    I->dat = new Utils::Pixel[w * h];
    return I;
}

void Img::delImg(Image* I)
{
	if (I)
	{
		free(I->dat);
		free(I);
	}
}

Utils::Pixel Img::getPixel(Image* img,int i,int j)
{
    return img->dat[img->w*j+i];
}

void Img::setPixel(Image* I,int i,int j,Utils::Pixel p)
{
    if (p._color._r == 0 && p._color._g == 0 && p._color._b == 0) {
        return;
    }
    if (p._color._r != 205 && p._color._g != 200 && p._color._b != 200) {
        I->dat[I->w*j+i] = p;
    }
}

void Img::setBackGround(Image* I,int i, int j,Utils::Pixel p)
{
    I->dat[I->w*j+i] = p;
}

int Img::save(Image* I, std::string file)
{
    std::ofstream outfile(file);
    if (!outfile.is_open()) {
        return -1;
    }
    outfile << "P3\n" << I->w << " " << I->h << "\n255\n";
    for (int i = 0; i < I->w * I->h; i++) {
        outfile <<  static_cast<int>(I->dat[i]._color._r) << " " <<  static_cast<int>(I->dat[i]._color._g) << " " <<  static_cast<int>(I->dat[i]._color._b) << " ";
    }
    outfile.close();
    return 0;
}

float check_primi_hit(Math::Ray ray, std::vector<RayTracer::APrimitives> prims)
{
    int curr = -1;
    for (std::size_t t = 0; t < prims.size(); t++) {
        if (prims[t].isHit(ray, chien)) {
            curr = static_cast<int>(t);
            return curr;
        }
    }
    return curr;
}

int checkHits(Math::Ray ray, std::vector<RayTracer::APrimitives> prims)
{
    int intersects = -1;

    for (std::size_t i = 0; i != prims.size(); i++) {
        intersects = prims[i].isHit(ray, chien) ? static_cast<int>(i) : intersects;
    }
    return intersects;
}

int main(int ac, char **av)
{
    Img image;
    Utils::Pixel pixel;

    RayTracer::Factory factory;
    RayTracer::Parser parser(factory);

    if (ac != 2)
        return 84;

    parser.parse(av[1]);

    factory = parser._factory;
    pixel._color._r = 255;
    pixel._color._g = 255;
    pixel._color._b = 255;

    std::cout << factory._camera.width << std::endl;
    std::cout << factory._camera.height << std::endl;

    Image *I = image.newImg(factory._camera.width, factory._camera.height);

    int nbrPrim = factory._primitives.size();

    for (int i = 0; i < I->w; i++) {
        for (int j = 0; j < I->h; j++) {
            image.setBackGround(I,i,j, pixel);
            for (int k = 0; k < nbrPrim; k++)
                image.setPixel(I,i,j,factory._primitives[k].computeColor(i,j));
        }
    }
    image.save(I,"output.ppm");
    image.delImg(I);
    return 0;
}