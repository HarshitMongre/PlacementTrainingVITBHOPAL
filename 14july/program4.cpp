#include<iostream>
using namespace std;
void revreseString(string & str, int s, int e){
    s=0, e=str.size()-1;
    while(s < e){
        swap(str[s] , str[e]);
        s++;
        e--;
    }
}

void printStr(string& str){
     for(int i=0; i<str.size(); i++){
        cout << str[i] << " ";
    } cout << endl;

}

int main(){
    string str = "hello world";
      int count = 0;
     for(int i=0; i<str.size() && str[i] != ' '; i++){
       count++;
     }
    revreseString(str,0,str.size());
     printStr(str);
    
}