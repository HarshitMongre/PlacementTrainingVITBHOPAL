// trendy number: 
#include<iostream>
using namespace std;

bool isTrendyNum(int n) {
    int count = 0;
    int temp = n;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    // Check if the number has exactly 3 digits
    if (count != 3) {
        return false;
    }

    // Extract the second digit
    temp = (n / 10) % 10;

    // Check if the second digit is divisible by 3
    if (temp % 3 == 0) {
        return true;
    }

    return false;
}

int main() {
    int n = 3637;
    bool ans = isTrendyNum(n);

    if (ans) {
        cout << "Trendy Number" << endl;
    } else {
        cout << "Not a Trendy Number" << endl;
    }

    return 0;
}
