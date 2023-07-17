#include<iostream>
using namespace std;
int returnFactorial(int &n){
    int mul = 1;
    for(int i=n; i>=1; i--){
        mul *= i;
    }

    return mul;
}
int main(){
    int n;
    cin >> n;
    int ans = returnFactorial(n);
    cout << ans << endl;
}