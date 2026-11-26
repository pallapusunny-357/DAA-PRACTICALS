#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(vector<int>& arr) {
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void insert(vector<int>& heap, int value) {
    heap.push_back(value);

    int i = heap.size() - 1;

    while (i > 0) {
        int parent = (i - 1) / 2;

        if (heap[parent] < heap[i]) {
            swap(heap[parent], heap[i]);
            i = parent;
        } else {
            break;
        }
    }
}

int deleteMax(vector<int>& heap) {
    if (heap.empty())
        return -1;

    int maximum = heap[0];

    heap[0] = heap.back();
    heap.pop_back();

    if (!heap.empty())
        heapify(heap, heap.size(), 0);

    return maximum;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    buildMaxHeap(arr);

    int value;
    cin >> value;

    insert(arr, value);

    deleteMax(arr);

    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
