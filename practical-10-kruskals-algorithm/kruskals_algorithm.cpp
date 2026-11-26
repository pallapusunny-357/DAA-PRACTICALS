#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class DisjointSet {
    vector<int> parent, rank;

public:
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    bool unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY) {
            return false;
        }

        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        }
        else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        }
        else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }

        return true;
    }
};

struct Edge {
    int u, v, weight;
};

bool compare(Edge a, Edge b) {
    return a.weight < b.weight;
}

void kruskalMST(int vertices, vector<Edge>& edges) {
    sort(edges.begin(), edges.end(), compare);

    DisjointSet dsu(vertices);

    int totalCost = 0;

    for (auto edge : edges) {
        if (dsu.unite(edge.u, edge.v)) {
            cout << edge.u << " " << edge.v << " " << edge.weight << endl;
            totalCost += edge.weight;
        }
    }

    cout << totalCost;
}

int main() {
    int vertices = 6;

    vector<Edge> edges = {
        {0, 1, 6},
        {0, 2, 1},
        {0, 3, 5},
        {1, 2, 5},
        {1, 4, 3},
        {2, 3, 5},
        {2, 4, 6},
        {2, 5, 4},
        {3, 5, 2},
        {4, 5, 6}
    };

    kruskalMST(vertices, edges);

    return 0;
}
