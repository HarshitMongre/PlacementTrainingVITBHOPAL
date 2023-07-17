#include <iostream>
using namespace std;

void primeSieveNumber(int N){


    int prime[100] = {0};
    for(int i = 2; i * i <= N; i++){
        if(prime[i] == 0){
            for(int j = i * i; j <= N; j += i){
                prime[j] = 1;
            }
        }
    }

    for(int i = 2; i <= N; i++){
        if(prime[i] == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){


    int N;
    cout << "Enter N ";
    cin >> N;
    primeSieveNumber(N);
    return 0;
}