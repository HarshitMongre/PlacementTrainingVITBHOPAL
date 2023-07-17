#include<iostream>
using namespace std;
int main(){
    int a  = 0, b = 0, c = 1;
    int n = 4;
    int nextNum ; 
    cout << a << " " << b  << " " << c << " ";
    while(n != 0){
        nextNum = a + b + c;
        int temp = nextNum;
        cout << nextNum << " ";
        a  = b;
        b = c;
        c = nextNum;

        n--;
    }
}