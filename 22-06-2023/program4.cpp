#include <iostream>

using namespace std;

void printSeries(int N) {
    int term = 6;
    for (int i = 0; i < N; i++) {
        cout << term << " ";
        term += (22 * i);
        if (i == N - 1)
            break;
        term += 22;
    }
}

int main() {
    int N;
    cin >> N;

    cout << "Series: ";
    printSeries(N);
}
