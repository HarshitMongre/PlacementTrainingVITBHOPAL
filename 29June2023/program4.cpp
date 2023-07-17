#include <iostream>
using namespace std;

int main() {
    unsigned char x = 64;
    int i;
    unsigned char y;
    i = x << 2;
    y = static_cast<unsigned char>(x << 2);
    cout << static_cast<int>(x) << " " << static_cast<int>(y);

    return 0;
}
