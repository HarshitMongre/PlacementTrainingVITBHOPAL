#include<iostream>
using namespace std;
int main(){

   int num ;
   double score = 0;
   int tellOdd = 3;
   while(tellOdd != 0 && num!=-1){
    cin >> num;
    if(num % 2 != 0){
        score++;
    }
    else if(num < 0){
        score--;
        break;
    }
    else{
        score = score - 0.5;
    }

    tellOdd--;
   }


   cout << score << endl;

}