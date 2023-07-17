// finding smallest window to be sorted to get whole array sorted?
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> ans;
     int arr[10] = {1,2,5,3,0,8,13,12,18,19};
     int count = 0;
     int s=0, e=s+1;
     while(e!=9){
        if(arr[s] > arr[e]){
            ans.push_back(s);
        } 
        s++;
        e++;
     }
     cout << ans[0] << " to " << ans[ans.size()-1]+1 << endl;
}