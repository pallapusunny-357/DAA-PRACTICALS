#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int matrixChainOrder(vector<int>& p) {
    int n = p.size() - 1;

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int length = 2; length <= n; length++) {
        for (int i = 0; i <= n - length; i++) {
            int j = i + length - 1;
            dp[i][j] = INT_MAX;

            for (int k = i; k < j; k++) {
                int cost = dp[i][k]
                         + dp[k + 1][j]
                         + p[i] * p[k + 1] * p[j + 1];

                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    return dp[0][n - 1];
}

int main() {
    int n;
    cin >> n;

    vector<int> p;

    int rows, cols;

    cin >> rows >> cols;
    p.push_back(rows);
    p.push_back(cols);

    for (int i = 2; i <= n; i++) {
        cin >> rows >> cols;

        if (rows != p.back()) {
            return 0;
        }

        p.push_back(cols);
    }

    cout << matrixChainOrder(p);

    return 0;
}
