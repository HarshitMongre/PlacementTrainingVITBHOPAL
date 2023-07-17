#include<iostream>
using namespace std;
#include<vector>

void findUnitDigit(int arr[], int n){
    vector<int> ans;
    for(int i=0; i<n; i++){
        int digit = arr[i] % 10;
        ans.push_back(digit);
    }

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
}

int main(){

int arr[7];
for(int i=0; i<7; i++){
    cin >> arr[i];
}
cout << endl;
findUnitDigit(arr,7);

}