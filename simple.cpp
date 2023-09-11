#include<iostream>
using namespace std;

class item {
public:
    int a; // Member variable 'a' should be declared in the class.

    void getdata() {
        cout << "Enter any integer: ";
        cin >> a;
    }

    void putdata() {
        cout << "a = " << a << endl;
    }
};

int main() {
    item t1; // Create an object of the 'item' class.

    // Call member functions on the object.
    t1.getdata();
    t1.putdata();

    return 0;
}
