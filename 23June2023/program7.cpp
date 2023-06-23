#include<iostream>
using namespace std;
int mystery(int x, int y){
    if(x<=y) {
        return x;   
         }
   return mystery(x-y, y);
}
int main(){
   int x = 15 , y=5;
   int m = mystery(x,y);
   cout << m << endl;
}

// output : 5