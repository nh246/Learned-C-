#include <iostream>
#include <vector>

std::vector<int> generateArray(int n) {
    if (n == 0) {
        return std::vector<int>();
    } else {
        std::vector<int> result = generateArray(n - 1);
        result.push_back(n);
        return result;
    }
}

int main() {
    int n = 5;
    std::vector<int> result = generateArray(n);
    
    // Printing the result
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
