#include <iostream>
using namespace std;

int getSumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        num = num / 10;
        sum = sum + digit;
    }
    return sum;
}

bool isMagicNumber(int num) {
    while (num > 9) {
        num = getSumOfDigits(num);
    }
    return num == 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isMagicNumber(num)) {
        cout << num << " magic no." << endl;
    } else {
        cout << num << "not a magic number" << endl;
    }
}

