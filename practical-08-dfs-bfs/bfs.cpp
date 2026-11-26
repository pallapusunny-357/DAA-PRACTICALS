#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<vector<int>> &graph, int start, int vertices) {
    vector<bool> visited(vertices, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << char(node + 'A') << " ";

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int vertices = 6;

    vector<vector<int>> graph(vertices);

    graph[0] = {1, 2};      // A -> B, C
    graph[1] = {0, 3, 4};   // B -> A, D, E
    graph[2] = {0, 5};      // C -> A, F
    graph[3] = {1};         // D -> B
    graph[4] = {1, 5};      // E -> B, F
    graph[5] = {2, 4};      // F -> C, E

    bfs(graph, 0, vertices);

    return 0;
}
