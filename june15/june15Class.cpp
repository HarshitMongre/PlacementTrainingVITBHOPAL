#include<iostream>
using namespace std;
void print(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}
int main(){
    int arr[7] = {1,0,1,0,0,1,1};
    int i=0, j=6;
    while(i<j){
        if(arr[i]==0 && arr[j]==1){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if(arr[i] == 1){
            i++;
        }
        else if(arr[j] == 0){
            j--;
        }
    }

    print(arr,7);
}