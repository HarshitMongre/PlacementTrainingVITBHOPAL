// all based on 2D arrays:
#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{3,3,3},{4,4,4},{5,5,5}};
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum+=arr[i][j];
        }
        cout << "sum :" << sum << endl;
    }
}