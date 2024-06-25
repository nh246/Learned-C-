#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> unionOfArrays(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> unionArray;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            unionArray.push_back(a[i]);
            i++;
        } else if (a[i] > b[j]) {
            unionArray.push_back(b[j]);
            j++;
        } else {
            unionArray.push_back(a[i]);
            i++;
            j++;
        }
    }

    while (i < a.size()) {
        unionArray.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        unionArray.push_back(b[j]);
        j++;
    }

    
    unionArray.erase(std::unique(unionArray.begin(), unionArray.end()), unionArray.end());

    return unionArray;
}

int main() {
    int n = 5, m = 3;
    std::vector<int> a = {1, 2, 3, 4, 6};
    std::vector<int> b = {2, 3, 5};

    std::vector<int> result = unionOfArrays(a, b);

    std::cout << "Union of arrays: ";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
