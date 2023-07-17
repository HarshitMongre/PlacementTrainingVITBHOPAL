// finding highest common divisor for a two integers

#include<iostream>
#include<vector>
using namespace std;

int HighestCommonDivisor(vector<int> &arr1, vector<int> &arr2){
    int max = 0;
    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr2.size(); j++){
            if(arr1[i] == arr2[j]){
                max = arr1[i];
            }
        }
    }

    return max;
}


int  main(){
    vector<int> ans1;
    vector<int> ans2;
    int n1, n2;
    cin >> n1 >> n2;
    for(int i=1; i<= n1; i++){
        if(n1 % i == 0){
            ans1.push_back(i);
        }
    }

    for(int i=1; i<= n2; i++){
        if(n2 % i == 0){
            ans2.push_back(i);
        }
    }


    int ans = HighestCommonDivisor(ans1,ans2);
    cout  << ans << endl;
   


   
}

