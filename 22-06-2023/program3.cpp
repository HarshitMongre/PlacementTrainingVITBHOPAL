#include <iostream>
using namespace std;


int countPaths(int m, int n) {
    // Base case: reached the destination
    if (m == 0 && n == 0)
        return 1;

    // Base case: out of bounds
    if (m < 0 || n < 0)
        return 0;

    // Recursive case: move right or down
    return countPaths(m - 1, n) + countPaths(m, n - 1);
}

int main() {
    int m, n;

    cout << "Enter the number of rows (M): ";
    cin >> m;

    cout << "Enter the number of columns (N): ";
    cin >> n;

    int totalPaths = countPaths(m - 1, n - 1);

    cout << "Total number of ways to reach the destination: " << totalPaths << endl;

    return 0;
}
