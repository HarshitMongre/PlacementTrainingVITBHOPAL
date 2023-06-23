#include<iostream>
using namespace std;
int main(){

    int i, j, result[20];

    for(i=1,j=0 ; i <= 20; i++){
        if(i%3 == 0){
            result[j++] = i;
        }

        if(i%6 == 0){
            result[j++] = i;
        }

        // printf("%dd" , result[i]);
    }

   cout << endl;
    for(int i=0; i<j; i++){
        cout << result[i] << " ";
    }
}