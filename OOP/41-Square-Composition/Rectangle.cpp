#include "Rectangle.h"


Rectangle::Rectangle(double w, double h)
        : width(w), height(h) {}

double Rectangle::getWidth() const {
        return width;
    }

double Rectangle::getHeight() const {
        return height;
    }

void Rectangle::setWidth(double w) {
        width = w;
    }

void Rectangle::setHeight(double h) {
        height = h;
    }
