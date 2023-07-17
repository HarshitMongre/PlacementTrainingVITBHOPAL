#include<iostream>
using namespace std;
int main(){

    int arr[3][3] = {{2,7,6},{9,5,1},{4,3,8}};
    bool isMagicSqr = true;
    int sumOfRows = 0;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
    }

}