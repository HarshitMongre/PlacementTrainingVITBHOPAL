#include<iostream>
using namespace std;
int main(){
    int i1 = 0, i2 = 1;
    cout << i1 << " " << i2 << " ";
    int seriesN = 10;
    for(int i=1; i<=seriesN-2; i++){
        int temp = i1  +i2;
        cout << temp << " ";
        i1 = i2;
        i2 = temp;
    }
}