# 🧮 Design and Analysis of Algorithms (DAA) Practicals

This repository contains clean, optimized Python implementations of core **Design and Analysis of Algorithms (DAA)** practicals, including step-by-step sorting and searching algorithms, theoretical complexity analyses, and empirical execution time measurements.

---

## 🧱 Repository Structure

```text
DAA-practicals/
├── practical-01-sorting-algorithms/
│   ├── bubblesort.cpp         # Bubble Sort (Optimized with early exit)
│   ├── insertionsort.cpp      # Insertion Sort
│   ├── mergesort.cpp          # Merge Sort (Divide & Conquer)
│   ├── quicksort.cpp         # Quick Sort (Divide & Conquer)
│   ├── selectionsort.cpp     # Selection Sort
│   └── README.md             # Detailed documentation for Practical 01
├── practical-02-searching-algorithms/
│   ├── linear_search.cpp      # Linear Search
│   ├── binary_search.cpp      # Binary Search (Iterative/Recursive)
│   └── README.md             # Detailed documentation for Practical 02
├── practical-03-max-heap/
│   ├── max_heap.cpp          # Max Heap Operations (Build Heap, Insert, Delete Max)
│   └── README.md             # Detailed documentation for Practical 03
├── practical-04-factorial-comparison/
│   ├── factorial_comparison.cpp  # Iterative vs Recursive Factorial with timing
│   └── README.md             # Detailed documentation for Practical 04
├── practical-05-knapsack-dp/
│   ├── knapsack_dp.cpp    # 0/1 Knapsack Problem using Dynamic Programming
│   └── README.md         # Detailed documentation for Practical 05
├── practical-06-matrix-chain-multiplication/
│   ├── matrix_chain_multiplication.cpp  # Matrix Chain Multiplication using DP
│   └── README.md                        # Detailed documentation for Practical 06
├── practical-07-coin-change-dp/
│   ├── coin_change_dp.cpp    # Coin Change Problem using Dynamic Programming
│   └── README.md            # Detailed documentation for Practical 07
├── practical-08-dfs-bfs/
│   ├── dfs.cpp                # Depth First Search traversal (predefined graph, no input)
│   ├── bfs.cpp                # Breadth First Search traversal (predefined graph, no input)
│   └── README.md             # Detailed documentation for Practical 08
├── practical-09-prims-algorithm/
│   ├── prims_algorithm.cpp   # Prim's Algorithm (Minimum Spanning Tree, greedy)
│   └── README.md             # Detailed documentation for Practical 09
├── practical-10-kruskals-algorithm/
│   ├── kruskals_algorithm.cpp # Kruskal's Algorithm (MST using Union-Find)
│   └── README.md             # Detailed documentation for Practical 10
├── practical-11-floyd-warshall/
│   ├── floyd_warshall.cpp     # Floyd-Warshall (All Pairs Shortest Paths, DP)
│   └── README.md             # Detailed documentation for Practical 11
├── practical-12-travelling-salesman/
│   ├── travelling_salesman.cpp # Travelling Salesman Problem (Held-Karp DP)
│   └── README.md             # Detailed documentation for Practical 12
└── README.md
```

---

## 📊 Algorithms & Complexity Summary

### 1. Sorting Algorithms (`practical-01-sorting-algorithms`)

| Algorithm | Best Case Time | Average Case Time | Worst Case Time | Space Complexity | Stability | Strategy |
| :--- | :---: | :---: | :---: | :---: | :---: | :--- |
| **Bubble Sort** | $\mathcal{O}(n)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$ | Stable | Brute Force / Exchange |
| **Selection Sort** | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$ | Unstable | In-Place Selection |
| **Insertion Sort** | $\mathcal{O}(n)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$ | Stable | Incremental Insertion |
| **Merge Sort** | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n)$ | Stable | Divide and Conquer |
| **Quick Sort** | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(\log n)$ | Unstable | Divide and Conquer |

### 2. Searching Algorithms (`practical-02-searching-algorithms`)

| Algorithm | Best Case Time | Average Case Time | Worst Case Time | Space Complexity | Prerequisite |
| :--- | :---: | :---: | :---: | :---: | :--- |
| **Linear Search** | $\mathcal{O}(1)$ | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ | Unsorted / Any array |
| **Binary Search** | $\mathcal{O}(1)$ | $\mathcal{O}(\log n)$ | $\mathcal{O}(\log n)$ | $\mathcal{O}(1)$ | Sorted array required |

### 3. Max Heap (`practical-03-max-heap`)

| Operation | Time Complexity | Auxiliary Space Complexity | Description |
| :--- | :---: | :---: | :--- |
| **Heapify** | $\mathcal{O}(\log n)$ | $\mathcal{O}(\log n)$ | Maintains max heap property downward |
| **Build Max Heap** | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ | Builds max heap from unsorted array |
| **Insertion** | $\mathcal{O}(\log n)$ | $\mathcal{O}(1)$ | Inserts element and sifts upward |
| **Delete Max** | $\mathcal{O}(\log n)$ | $\mathcal{O}(\log n)$ | Extracts root and heapifies downward |
### 4. Factorial Calculation — Iterative vs Recursive (`practical-04-factorial-comparison`)

| Method | Time Complexity | Space Complexity | Description |
| :--- | :---: | :---: | :--- |
| **Iterative Factorial** | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ | Uses a loop, no extra stack memory |
| **Recursive Factorial** | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ | Uses the function call stack |
### 5. 0/1 Knapsack Problem — Dynamic Programming (`practical-05-knapsack-dp`)

| Approach | Time Complexity | Space Complexity | Description |
| :--- | :---: | :---: | :--- |
| **Dynamic Programming** | $\mathcal{O}(n \times \text{capacity})$ | $\mathcal{O}(n \times \text{capacity})$ | Maximizes value of items within knapsack capacity |

### 6. Matrix Chain Multiplication — Dynamic Programming (`practical-06-matrix-chain-multiplication`)

| Approach | Time Complexity | Space Complexity | Description |
| :--- | :---: | :---: | :--- |
| **Dynamic Programming** | $\mathcal{O}(n^3)$ | $\mathcal{O}(n^2)$ | Finds optimal parenthesization to minimize multiplications |

### 7. Coin Change Problem — Dynamic Programming (`practical-07-coin-change-dp`)

| Approach | Time Complexity | Space Complexity | Description |
| :--- | :---: | :---: | :--- |
| **Dynamic Programming** | $\mathcal{O}(\text{amount} \times \text{coins})$ | $\mathcal{O}(\text{amount})$ | Finds minimum coins for amount via DP table |

### 8. DFS and BFS Graph Traversals (`practical-08-dfs-bfs`)

| Algorithm | Time Complexity | Space Complexity | Description |
| :--- | :---: | :---: | :--- |
| **DFS** | $\mathcal{O}(V + E)$ | $\mathcal{O}(V)$ worst case | Depth-first traversal using an explicit stack |
| **BFS** | $\mathcal{O}(V + E)$ | $\mathcal{O}(V)$ worst case | Breadth-first traversal using a queue |

### 9. Prim's Algorithm (`practical-09-prims-algorithm`)

| Algorithm | Time Complexity | Space Complexity | Description |
| :--- | :---: | :---: | :--- |
| **Prim's Algorithm** | $\mathcal{O}(V^2)$ | $\mathcal{O}(V)$ | Greedy MST; grows the tree one vertex at a time (adjacency matrix) |

### 10. Kruskal's Algorithm (`practical-10-kruskals-algorithm`)

| Algorithm | Time Complexity | Space Complexity | Description |
| :--- | :---: | :---: | :--- |
| **Kruskal's Algorithm** | $\mathcal{O}(E \log E)$ | $\mathcal{O}(V + E)$ | Greedy MST; picks cheapest edges avoiding cycles using Union-Find |

### 11. Floyd-Warshall Algorithm (`practical-11-floyd-warshall`)

| Approach | Time Complexity | Space Complexity | Description |
| :--- | :---: | :---: | :--- |
| **Dynamic Programming** | $\mathcal{O}(V^3)$ | $\mathcal{O}(V^2)$ | Finds shortest distance between every pair of vertices |

### 12. Travelling Salesman Problem (`practical-12-travelling-salesman`)

| Approach | Time Complexity | Space Complexity | Description |
| :--- | :---: | :---: | :--- |
| **Held-Karp Dynamic Programming** | $\mathcal{O}(n^2 \cdot 2^n)$ | $\mathcal{O}(n \cdot 2^n)$ | Computes the minimum-cost tour visiting every city once |

---

## 🚀 How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/pallapusunny-357/DAA-PRACTICALS.git
   cd DAA-PRACTICALS
   ```

2. Run any sorting algorithm (e.g., Quick Sort):
   ```bash
   C++ practical-01-sorting-algorithms/quicksort.cpp
   ```

3. Run any searching algorithm (e.g., Binary Search):
   ```bash
   C++ practical-02-searching-algorithms/binary_search.cpp
   ```

4. Run Max Heap operations (Practical 03):
   ```bash
   C++ practical-03-max-heap/max_heap.cpp
   ```
5. Run the factorial comparison (Practical 04):
   ```bash
   C++ practical-04-factorial-comparison/factorial_comparison.cpp
   ```

6. Run the 0/1 knapsack dynamic programming solution (Practical 05):
   ```bash
   C++ practical-05-knapsack-dp/knapsack_dp.cpp
   ```

7. Run the matrix chain multiplication dynamic programming solution (Practical 06):
   ```bash
   C++ practical-06-matrix-chain-multiplication/matrix_chain_multiplication.cpp
   ```

8. Run the coin change dynamic programming solution (Practical 07):
   ```bash
   C++ practical-07-coin-change-dp/coin_change_dp.cpp
   ```

9. Run the DFS and BFS graph traversal solutions (Practical 08):
   ```bash
   C++ practical-08-dfs-bfs/dfs.cpp
   C++ practical-08-dfs-bfs/bfs.cpp
   ```

10. Run Prim's Algorithm MST solution (Practical 09):
    ```bash
    C++ practical-09-prims-algorithm/prims_algorithm.cpp
    ```

11. Run Kruskal's Algorithm MST solution (Practical 10):
    ```bash
    C++ practical-10-kruskals-algorithm/kruskals_algorithm.cpp
    ```

12. Run the Floyd-Warshall all-pairs shortest paths solution (Practical 11):
    ```bash
    C++ practical-11-floyd-warshall/floyd_warshall.cpp
    ```

13. Run the Travelling Salesman solution (Practical 12):
    ```bash
    C++ practical-12-travelling-salesman/travelling_salesman.cpp
    ```

---

## 🧑‍💻 Author

**pallapusunny-357**  
- GitHub: [@pallapusunny-357](https://github.com/pallapusunny-357)
