#include <iostream>

class MyClass {
public:
    int value;

    // Constructor to initialize the value
    MyClass(int v) : value(v) {}
};

int main() {
    // Create two objects of MyClass
    MyClass obj1(10);
    MyClass obj2(20);

    // Print the values of the two objects
    std::cout << "Object 1 value: " << obj1.value << std::endl;
    std::cout << "Object 2 value: " << obj2.value << std::endl;

    return 0;
}
