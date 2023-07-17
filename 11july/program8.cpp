#include<iostream>
using namespace std;
#include<vector>

vector<int> sieveOfEratosthenes(int start, int end) {
    vector<bool> isPrime(end + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

    for (int i = 2; i * i <= end; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= end; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = start; i <= end; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
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

int main(){
    int s=11, e=50;
    vector<int> ans = sieveOfEratosthenes(s, e);
    for(int i=0; i<ans.size(); i++){
        int ans1 = factorsDevision(ans[i]);
        int ans2 = 0;
        while(ans1>10){
            ans2 = factorsDevision(ans1);
        }
    }
    cout << endl;

    


}