#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int n) {
    string str = to_string(n);
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int n = 51415;
    if (isPalindrome(n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
