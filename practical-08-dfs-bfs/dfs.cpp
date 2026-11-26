#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(vector<vector<int>> &graph, int start, int vertices) {
    vector<bool> visited(vertices, false);
    stack<int> s;

    s.push(start);

    while (!s.empty()) {
        int node = s.top();
        s.pop();

        if (!visited[node]) {
            visited[node] = true;
            cout << char(node + 'A') << " ";

            for (int i = graph[node].size() - 1; i >= 0; i--) {
                int neighbor = graph[node][i];

                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
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

    dfs(graph, 0, vertices);

    return 0;
}
