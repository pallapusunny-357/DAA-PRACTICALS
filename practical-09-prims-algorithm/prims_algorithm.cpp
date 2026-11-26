#include <iostream>
#include <vector>
#include <climits>
using namespace std;

const int INF = INT_MAX;

void primMST(vector<vector<int>> &graph) {
    int n = graph.size();

    vector<bool> visited(n, false);
    vector<int> minEdge(n, INF);
    vector<int> parent(n, -1);

    minEdge[0] = 0;

    int totalCost = 0;

    for (int i = 0; i < n; i++) {
        int u = -1;

        for (int j = 0; j < n; j++) {
            if (!visited[j] && (u == -1 || minEdge[j] < minEdge[u])) {
                u = j;
            }
        }

        visited[u] = true;
        totalCost += minEdge[u];
    }

    for (int u = 0; u < n; u++) {
        for (int v = 0; v < n; v++) {
            if (!visited[v] && graph[u][v] < minEdge[v]) {
                minEdge[v] = graph[u][v];
                parent[v] = u;
            }
        }
    }

    cout << totalCost;
}

int main() {
    vector<vector<int>> graph = {
        {INF, 6, 1, 5, INF, INF},
        {6, INF, 5, INF, 3, INF},
        {1, 5, INF, 5, 6, 4},
        {5, INF, 5, INF, INF, 2},
        {INF, 3, 6, INF, INF, 6},
        {INF, INF, 4, 2, 6, INF}
    };

    primMST(graph);

    return 0;
}
