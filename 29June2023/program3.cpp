
// program 2 using xor operation : 


#include<iostream>
using namespace std;

int main(){
    int arr[9] = {1, 2, 3, 3, 1, 2, 1, 4, 4};
    int n = 9;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    cout << ans << endl;
    return 0;
}
