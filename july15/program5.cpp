#include<iostream>
using namespace std;
int main(){
    int year , month;
    cin >> year;
    cin >> month;
    if(year % 4 == 0 && month == 2){
        cout << "leap year" << endl;
        cout << "29 days" << endl;
    }
    else{
        if(month == 2) cout << "28 days" << endl;
        if(month == 1 ||month == 3 ||month == 5 ||month == 7 ||month == 8 ||month == 10 ||month == 12 ){
            cout << "31 days" << endl;
        }
        else{
            cout << "30 days" << endl;
        }
    }

}