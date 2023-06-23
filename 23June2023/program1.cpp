#include<iostream>
using namespace std;
    // if(0,1){
    //     cout << "hii" << endl;
    // }

    // else{
    //     cout << "none" << endl;
    // }   // o/p : hii


    // int x = 2;
    // if(x--,--x,x){
    //     cout << "hii" << endl;
    // }
    // else{
    //     cout << "hey" << endl;
    // }    // o/p : hey 


   //Q4. 

// void printNumbersWithZeros(int n, int m) {
//     int paddingWidth = 0;
//     int temp = n;
//     while (temp > 0) {
//         temp /= 10;
//         paddingWidth++;
//     }

//     for (int i = m; i <= n; i++) {
//         if (i < 10) {
//             cout << "0"; 
//         }
//         cout << i;
//         if (i < n) {
//             cout << ", ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n, m;
//     std::cout << "Enter the values of n and m: ";
//     std::cin >> n >> m;
//     std::cout << "Output: ";
//     printNumbersWithZeros(n, m);
//     return 0;
// }


// Q5. 
int main(){
int n;
cin >> n;
int *arr = new int[n];
for(int i=0; i<n; i++){
    cout << arr[i] << " ";
}
cout << endl;

cout << "enter n2: " << endl;
int n2;
cin >> n2;

int s;
cout << "size of subset : " << endl;
cin >> s;

}
