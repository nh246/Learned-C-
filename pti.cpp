#include <iostream>

class Prototype {
public:
    int value;

    Prototype(int val) : value(val) {}

    void printValue() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Prototype* obj1 = new Prototype(42);
    Prototype* obj2 = new Prototype(100);

    // Use obj1 as a prototype for obj2
    obj2->value = obj1->value; // Copy value from obj1

    obj1->printValue(); // Output: Value: 42
    obj2->printValue(); // Output: Value: 42

    delete obj1;
    delete obj2;

    return 0;
}
