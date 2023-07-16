// strong number :
#include<iostream>
using namespace std;
int findFcatorial(int &n){
    int mul = 1;
    for(int i=n; i>=1; i--){
        mul = mul * i;
    }
    return mul;
}
int main(){

    int num = 40585;
    int temp = num;
    int sum = 0;
    while(num != 0){
        int digit = num % 10;
        num /= 10;
        int ans = findFcatorial(digit);
        sum = sum + ans;

    }

    if(temp == sum ){
        cout << "strong number" << endl;
    }
    else{
        cout << "not strong number" << endl;
    }

}