#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCoins(vector<int>& coins, int amount) {
    if (amount < 0)
        return -1;

    if (amount == 0)
        return 0;

    vector<int> dp(amount + 1, INT_MAX);

    dp[0] = 0;

    for (int target = 1; target <= amount; target++) {
        for (int coin : coins) {
            if (coin <= target && dp[target - coin] != INT_MAX) {
                dp[target] = min(dp[target], dp[target - coin] + 1);
            }
        }
    }

    return (dp[amount] != INT_MAX) ? dp[amount] : -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> coins(n);

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int amount;
    cin >> amount;

    cout << minCoins(coins, amount);

    return 0;
}
