#include <iostream>
#include <vector>

using namespace std;

float optimalBST(vector<float>& keys, vector<float>& freq) {
    int n = keys.size();
    vector<vector<float>> cost(n + 1, vector<float>(n + 1, 0));

    for (int i = 0; i < n; ++i)
        cost[i][i] = freq[i];

    for (int L = 2; L <= n; ++L) {
        for (int i = 0; i <= n - L + 1; ++i) {
            int j = i + L - 1;
            cost[i][j] = INT_MAX;
            for (int r = i; r <= j; ++r) {
                float c = ((r > i) ? cost[i][r - 1] : 0) +
                          ((r < j) ? cost[r + 1][j] : 0) +
                          freq[r];
                if (c < cost[i][j])
                    cost[i][j] = c;
            }
        }
    }
    return cost[0][n - 1];
}

int main() {
    vector<float> keys = {10, 12, 20};
    vector<float> freq = {34, 8, 50};
    cout << "Cost of optimal BST is: " << optimalBST(keys, freq) << endl;
    return 0;
}
