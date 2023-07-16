// spilling into teams :
#include<iostream>
using namespace std;
int main(){
    int members;
    cout << "no. of members :" << endl;
    cin >> members;
    int size;
    cout << "how many teams required :" << endl;
    cin >> size;

    int ans = members / size;
    cout << "total teams formed :" << ans << endl;
    int remaining = members - (ans * size) ;
    cout << "remaining students :" << remaining << endl;





}