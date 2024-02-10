#include <iostream>
#include <string>

using namespace std;

int countDivisibleDigits(int n) {
    int count = 0;
    string numStr = to_string(n);
    for (char digit : numStr) {
        int d = digit - '0'; // Convert char to int
        if (d != 0 && n % d == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // Test cases
    cout << countDivisibleDigits(336) << endl;  // Output: 3
    cout << countDivisibleDigits(35) << endl;   // Output: 1
    cout << countDivisibleDigits(373) << endl;  // Output: 0
    return 0;
}
