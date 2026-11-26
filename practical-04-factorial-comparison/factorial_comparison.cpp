#include <iostream>
using namespace std;

long long factorialIterative(int n) {
    long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorialRecursive(n - 1);
}

int main() {
    int n;
    cin >> n;

    long long iterativeResult = factorialIterative(n);
    long long recursiveResult = factorialRecursive(n);

    cout << iterativeResult << endl;
    cout << recursiveResult << endl;

    return 0;
}
