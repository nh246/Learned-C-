#include <iostream>

// Base class (parent class)
class Shape {
public:
    double area() {
        return 0.0;
    }
};

// Derived class (child class) that inherits from Shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the area() function from the base class
    double area() {
        return 3.14 * radius * radius;
    }
};

// Derived class (child class) that inherits from Shape
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override the area() function from the base class
    double area() {
        return length * width;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    std::cout << "Area of Circle: " << circle.area() << std::endl;
    std::cout << "Area of Rectangle: " << rectangle.area() << std::endl;

    return 0;
}
