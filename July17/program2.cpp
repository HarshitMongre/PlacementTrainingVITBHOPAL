                               // leetcode 171. Excel Sheet Column Number

#include<iostream>
#include<vector>
using namespace std;
int main(){
    string c = "AZZ";
    vector<int> ans;
    int n=0;
    for(int i=0; i<c.length(); i++){
        n *= 26;
        n = n + c[i] - 'A' + 1;   
    }

    cout << n << endl;
}
