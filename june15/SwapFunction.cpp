#include<iostream>
using namespace std;
void swap(int *arr, int n, int s){
      int temp ;
      for(int i=0; i<n; i++){
          
          temp = arr[i];
          arr[i] = arr[i+1];
          arr[i+1] = temp;
      }
}
int main(){
    int arr[] = {};
}