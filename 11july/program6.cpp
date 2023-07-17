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

// int isPrimeOfPrime(int num){
//     int ans = 0;
//     while(num != 0){
//         int temp =  0;
//         int digit = num % 10;
//         num = num / 10;
//         ans = ans  + digit ;
//         cout << ans << " " << endl;
//         ans = temp;
//     }

//     if(isPrime(ans)){
//         cout << ans << " " ;
//     }
    
// }


int factorsDevision(int num){
   int  ans  = 0;
   while(num != 0){
     int digit = num % 10;
     num  = num / 10;
     ans = ans + digit;
   }

   return ans;

}


int main(){
    int s = 11, e = 99;
    vector<int> ans;
   // storing all prime no's into ans array :
    for(int i=s; i<=e; i++){
        if(isPrime(i)){
            ans.push_back(i);
        }
    }


   cout << "print all prime no.'s " << endl;
   for(int i=0; i<ans.size(); i++){
    cout << ans[i] << "  ";
   }
cout <<  endl;
    for(int i=0; i<ans.size(); i++){
        int ans1 = factorsDevision(ans[i]);
        if(ans1 > 10) {
            ans1 = factorsDevision(ans1);
        }
        if(isPrime(ans1)) {
            cout << ans[i] << "->" << ans1 << "->" <<"prime"<< endl;
        }
        else{
            cout << ans[i] << "->" << ans1 << "->" << "NON-PRIME" << endl;
        }

    
    }
    cout << endl;



   


}