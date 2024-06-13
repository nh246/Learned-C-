#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a string to hold the name
    string name;

    // Ask the user to enter a name
    cout << "Enter your name: ";
    getline(cin, name);

    // Reverse the name
    string reversedName = string(name.rbegin(), name.rend());

    // Output the reversed name
    cout << "Reversed name: " << reversedName << endl;

    return 0;
}
