#include<iostream>
using namespace std;
int main(){
    int arr[9] = {2,2,3,3,2,2,1,4,4};
    for(int i=0; i<9; i++){
        int count = 0;
        for(int j=0; j<9; j++){
            if ( arr[i] == arr[j]){
                count++;
            }
        }

        if(count % 2 != 0){
            cout << arr[i] << endl;
            break;
        }
    }
}




