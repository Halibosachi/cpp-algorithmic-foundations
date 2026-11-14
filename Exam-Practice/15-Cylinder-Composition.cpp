#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getRadius() const {
        return radius;
    }

    double area() const {
        const double PI = 3.141592;
        return PI * radius * radius;
    }
};

class Cylinder {
private:
    Circle base;
    double height;

public:
    Cylinder(double radius, double h);

    double getRadius() const;
    double getHeight() const;
    double volume() const;
    double surfaceArea() const;
};

Cylinder::Cylinder(double radius, double h) : base(radius), height(h) {}

double Cylinder::getRadius() const {
    return base.getRadius();
}

double Cylinder::getHeight() const {
    return height;
}

double Cylinder::volume() const {
    return base.area() * height;
}

double Cylinder::surfaceArea() const {
    return 2 * base.area() + height * base.getRadius() * 3.141592 * 2;
}



int main() {
    Cylinder a(2, 5);
    Cylinder b(3, 10);
    Cylinder c(1, 1);

    cout << a.getRadius() << '\n';
    cout << a.getHeight() << '\n';
    cout << a.volume() << '\n';
    cout << a.surfaceArea() << '\n';

    cout << b.volume() << '\n';
    cout << b.surfaceArea() << '\n';

    cout << c.volume() << '\n';
    cout << c.surfaceArea() << '\n';

    return 0;
}
