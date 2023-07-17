#include<iostream>
using namespace std;

int main() {
    string str1 = "1110000";
    string str2 = "0001110111";

    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == '0') {
            count0++;
        }
        else {
            count1++;
        }
    }

    int c0 = 0;
    int c1 = 0;
    for (int i = 0; i < str2.length(); i++) {
        if (str1[i] == '0') {
            c0++;
        }
        else {
            c1++;
        }
    }

    if (count1 == c1 && count0 == c0) {
        cout << "solution is possible" << endl;
    }
    else {
        cout << "solution is not possible" << endl;
    }

    return 0;
}
