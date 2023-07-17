#include<iostream>
using namespace std;
bool checkPalindrom(int &n){
    int ans = 0;
    int newN = n;
    while(n!=0){
        int digit = n%10;
        n/=10;
        ans = ans*10 +  digit;
    }

    if(ans == newN){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    if(checkPalindrom(n)){
        cout << "palindrom no." << endl;
    }
    else{
        cout << "not a palindrom" << endl;
    }

}