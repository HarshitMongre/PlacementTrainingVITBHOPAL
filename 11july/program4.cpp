#include<iostream>
#include<vector>
using namespace std;
bool isPrime(int num){
 for(int i=2; i*i <= num; i++){
    if(num <= 1){
        return false;
    }

    else if(num % i == 0){
        return false;
    }

    return true;
 }   
}


int main(){
    int s = 11, e = 30;
    vector<int> ans;
   // storing all prime no's into ans array :
    for(int i=s; i<=e; i++){
        if(isPrime(i)){
            ans.push_back(i);
        }
    }

    for(int i=0; i<ans.size(); i++){
        for(int j=i+1; j<ans.size(); j++){
            if(ans[j] - ans[i] == 6){
                cout << ans[i] << "," << ans[j] <<endl;
            }
        }
    }


}