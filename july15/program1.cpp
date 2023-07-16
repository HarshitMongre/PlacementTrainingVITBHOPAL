#include<iostream>
#include<algorithm>
using namespace std;
void sortArr(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    // Kth largest element :
    int arr[7] = {4,2,4,1,6,9,8};
    sortArr(arr,7);
    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }cout << endl;
    int k;
    cin>> k;
    int KthLargest = arr[7-k];
    cout << KthLargest << endl;


}