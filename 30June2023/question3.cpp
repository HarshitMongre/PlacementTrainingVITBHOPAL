// // brute force :
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int *arr = new int[n];


//     // taking array input: 
//     for(int i=0; i<n; i++){
//         cin >> arr[i] ;
//     }

//     int mid = n / 2;

//     // arrang half part of array in assending order and half part in descending :
//     for(int i=0; i<n; i++){
//        for(int j=i+1; j<=mid; j++){
//         if(arr[i] > arr[j]){
//             swap(arr[i] , arr[j]);
//         }
//        }

//        for(int j=mid+1; j<n; j++){
//         if(arr[i] > arr[j]){
//             swap(arr[i], arr[j]);
//         }
//        }
//     }

//     // printing array elements : 
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }cout << endl;

// }


// optimised :
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    // Taking array input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array in ascending order
    sort(arr, arr + n);

    // Reverse the second half of the array
    reverse(arr + n / 2, arr + n);

    // Printing array elements
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
