#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"

class Square {
private:
    Rectangle sq;

public:
    Square(double len);

    double getSide() const;
    void setSide(double len);

    double perimeter() const;
    double area() const;
    double diagonal() const;
};

#endif