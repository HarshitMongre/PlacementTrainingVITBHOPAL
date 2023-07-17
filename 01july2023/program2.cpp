// rotate array using k steps:

#include<iostream>
using namespace std;
void printArr(int arr[], int s, int n){
    for(int i= s; i<n; i++){
        cout << arr[i] << " " ;
    }
}
int main(){
    int arr[5] = {2,3,5,6,7};
    int k = 4;
    int n = k % 5;

    printArr(arr, 5-k, 5);
    printArr(arr, 0, 5-k);
    

}