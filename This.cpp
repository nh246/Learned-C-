#include <iostream>

class MyClass {
public:
    int x;

    void setX(int value) {
        // Using "this" pointer to access the member variable
        this->x = value;
    }

    void printX() {
        // Using "this" pointer to access the member variable
        std::cout << "x = " << this->x << std::endl;
    }
};

int main() {
    MyClass obj;

    obj.setX(42);
    obj.printX();

    return 0;
}
