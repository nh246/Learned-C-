#include <iostream>
#include <vector>

using namespace std;

pair<int, int> findMaxMin(const vector<int>& arr) {
    if (arr.empty()) {
        return make_pair(INT_MIN, INT_MAX); // Handle the case of an empty array
    }

    int max_num = arr[0];
    int min_num = arr[0];

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > max_num) {
            max_num = arr[i];
        } else if (arr[i] < min_num) {
            min_num = arr[i];
        }
    }

    return make_pair(max_num, min_num);
}

int main() {
    vector<int> myArray = {3, 7, -1, 12, 5, 0};
    pair<int, int> result = findMaxMin(myArray);

    cout << "Maximum number: " << result.first << endl;
    cout << "Minimum number: " << result.second << endl;

    return 0;
}
