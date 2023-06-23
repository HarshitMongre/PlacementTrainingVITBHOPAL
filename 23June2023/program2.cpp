#include <iostream>
#include <vector>
using namespace std;

bool isSubsetPresent(vector<int>& arr, int n, int n2, int s) {
    // Check if n2 is present in every non-overlapping subset of size s
    for (int i = 0; i <= n - s; i += s) {
        bool isPresent = false;
        for (int j = i; j < i + s; j++) {
            if (arr[j] == n2) {
                isPresent = true;
                break;
            }
        }
        if (!isPresent) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int n2;
    cout << "Enter the number to search: ";
    cin >> n2;

    int s;
    cout << "Enter the size of the subsets: ";
    cin >> s;

    bool isPresentInEverySubset = isSubsetPresent(arr, n, n2, s);

    if (isPresentInEverySubset) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
