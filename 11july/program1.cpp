#include<iostream>
using namespace std;
int main(){
    int month,days;
    double roomRent;
    double toriff = 0;
    cin >> month;
    cin >> roomRent;
    cin >> days;
    if(month == 4 || month == 6 || month == 11 || month == 12){
        roomRent = roomRent + (roomRent * 0.2);
        toriff = roomRent * days;
    }
    else{
        toriff = roomRent * days;
    }

    cout << toriff << endl;
}