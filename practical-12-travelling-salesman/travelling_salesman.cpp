#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

const int INF = INT_MAX;

pair<int, vector<int>> tsp(vector<vector<int>>& dist) {
    int n = dist.size();
    int numMasks = 1 << n;

    vector<vector<int>> dp(numMasks, vector<int>(n, INF));
    vector<vector<int>> parent(numMasks, vector<int>(n, -1));

    dp[1][0] = 0;

    for (int mask = 0; mask < numMasks; mask++) {
        for (int last = 0; last < n; last++) {
            if (dp[mask][last] == INF)
                continue;

            for (int next = 0; next < n; next++) {
                if (mask & (1 << next))
                    continue;

                int newMask = mask | (1 << next);
                int newCost = dp[mask][last] + dist[last][next];

                if (newCost < dp[newMask][next]) {
                    dp[newMask][next] = newCost;
                    parent[newMask][next] = last;
                }
            }
        }
    }

    int fullMask = numMasks - 1;
    int bestCost = INF;
    int bestLast = -1;

    for (int last = 1; last < n; last++) {
        int cost = dp[fullMask][last] + dist[last][0];

        if (cost < bestCost) {
            bestCost = cost;
            bestLast = last;
        }
    }

    vector<int> route;

    if (bestLast != -1) {
        int mask = fullMask;
        int node = bestLast;

        while (mask > 1) {
            route.push_back(node);
            int prev = parent[mask][node];
            mask &= ~(1 << node);
            node = prev;
        }

        route.push_back(0);
        reverse(route.begin(), route.end());
        route.push_back(0);
    }

    return {bestCost, route};
}

int main() {
    vector<vector<int>> dist = {
        {0, 20, 42, 35, 25},
        {20, 0, 30, 34, 16},
        {42, 30, 0, 12, 23},
        {35, 34, 12, 0, 18},
        {25, 16, 23, 18, 0}
    };

    pair<int, vector<int>> result = tsp(dist);

    cout << result.first << endl;

    for (int city : result.second) {
        cout << city << " ";
    }

    return 0;
}
