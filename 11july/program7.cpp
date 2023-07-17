#include<iostream> 
#include<vector>
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

int factorsDevision(int num){
   int  ans  = 0;
   while(num != 0){
     int digit = num % 10;
     num  = num / 10;
     ans = ans + digit;
   }

   return ans;

}

using namespace std;
int main(){
   int s=11, e=50;
   vector<int> ans;
   for(int i=s; i<=e; i++){
    if(isPrime(i)){
        ans.push_back(i);
    }
    
  }

  for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
  }
  cout << endl;

  
  for(int i=0; i<ans.size(); i++){
    int ans1 = factorsDevision(ans[i]);
    int ans2  = 0;
    if(ans1 > 10){
        ans2 = factorsDevision(ans1);

}

    if(ans1<10){
         if( isPrime(ans1) && ans2 !=9 ){
            cout << ans[i] << " - " << ans1 << " - " << " prime" << endl;
        }
        else{
            cout << ans[i] << " - " << ans1 << " - " << " Non-prime" << endl;
        }
    }
    if(ans1 > 10){
    if(isPrime(ans2) && ans2 !=9){
            cout << ans[i] << " - " << ans1 << " - " << ans2 << " - prime" << endl;
        }
        else{
            cout << ans[i] << " - " << ans1 << " - " << ans2 << " - Non-prime" << endl;
        }

    }


    

  }
}