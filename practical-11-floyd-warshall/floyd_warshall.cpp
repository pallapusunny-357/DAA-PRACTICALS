#include <iostream>
#include <vector>
#include <climits>
using namespace std;

const int INF = INT_MAX;

void floydWarshall(vector<vector<int>> &graph) {
    int n = graph.size();

    vector<vector<int>> dist = graph;

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] != INF &&
                    dist[k][j] != INF &&
                    dist[i][k] + dist[k][j] < dist[i][j]) {

                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> graph = {
        {0, 3, 8, INF},
        {INF, 0, INF, 1},
        {INF, 4, 0, INF},
        {2, INF, INF, 0}
    };

    floydWarshall(graph);

    return 0;
}
