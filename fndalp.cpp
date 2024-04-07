#include <iostream>
using namespace std;

bool findAlphabet(char arr[], int size, char target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    int size = sizeof(arr) / sizeof(arr[0]);
    char target = 'c';

    if (findAlphabet(arr, size, target)) {
        cout << "Alphabet found!" << endl;
    } else {
        cout << "Alphabet not found!" << endl;
    }

    return 0;
}
