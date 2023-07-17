#include<iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        if(ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U'){
            cout << "vowels" << endl;
        }
        else{
            cout << "consonents" << endl;
        }
    }
    else{
        cout << "special characters" << endl;
    }
}