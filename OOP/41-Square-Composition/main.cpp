#include "Rectangle.h"
#include "Square.h"
#include <iostream>
#include <stdexcept>

// Square Class Using Composition
// Implements a Square class containing a Rectangle object.
// Concepts: Composition, encapsulation, constructor initializer lists,
// const member functions, and exception handling.


int main() {
    Square s(5);

    std::cout << "Side : " << s.getSide() << "\n";
    std::cout << "Perimeter : " << s.perimeter() << "\n";
    std::cout << "Area : " << s.area() << "\n";
    std::cout << "Diagonal : " << s.diagonal() << "\n";

    s.setSide(10);

    std::cout << "Side : " << s.getSide() << "\n";
    std::cout << "Perimeter : " << s.perimeter() << "\n";
    std::cout << "Area : " << s.area() << "\n";
    std::cout << "Diagonal : " << s.diagonal() << "\n";

    try {
        Square s1(-5);
    }

    catch (const std::invalid_argument& e) {
        std::cout << e.what() << "\n";
    }

    try {
        Square s2(0);
    }

    catch (const std::invalid_argument& e) {
        std::cout << e.what() << "\n";
    }


    try {    
        s.setSide(-6);
    }

    catch (const std::invalid_argument& e) {
        std::cout << e.what() << "\n";
    }

    std::cout << "Side after invalid input: " << s.getSide() << "\n";

    return 0;
}