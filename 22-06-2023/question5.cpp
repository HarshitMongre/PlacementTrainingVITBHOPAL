#include <iostream>
#include <string>

using namespace std;

int main() {
    string existingNum = "0123456789";
    string replacedNum = "9876543210";
    string inputNumber;

    cout << "Enter a number: ";
    cin >> inputNumber;

    string output = inputNumber;

    for (int i = 0; i < inputNumber.length(); i++) {
        char digit = inputNumber[i];
        size_t found = existingNum.find(digit);

        if (found != string::npos) {
            output[i] = replacedNum[found];
        }
    }

    cout << "Replaced number: " << output << endl;

    return 0;
}
