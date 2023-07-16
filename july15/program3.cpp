// armstrong number :
#include<iostream>
using namespace std;
 int findCube(int &n){
        return (n*n*n);
 }
int main(){
   int n = 153;
   int temp = n;
   int sum  =0;
   while(n!=0){
    int digit = n%10;
    n/=10;
    int ans = findCube(digit);
    sum = sum + ans;
   }

   if(temp ==sum){
    cout << "armstrong number" << endl;
   }
   else{
    cout << "not an armstrong number" << endl;
   }
}