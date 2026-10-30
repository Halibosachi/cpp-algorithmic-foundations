#include "Square.h"
#include "Rectangle.h"
#include <cmath>
#include <stdexcept>

Square::Square(double len) : sq(len, len) {
    if(len <= 0){
        throw std::invalid_argument("Invalid square side length");
    }
}

double Square::getSide() const {
    return sq.getWidth();
}

void Square::setSide(double len) {
    if(len <= 0) {
        throw std::invalid_argument("Invalid side length");
    }
    sq.setWidth(len);
    sq.setHeight(len);
}

double Square::perimeter() const {
    return 4 * getSide();
}

double Square::area() const {
    return getSide() * getSide();
}

double Square::diagonal() const {
    return getSide() * std::sqrt(2);
}