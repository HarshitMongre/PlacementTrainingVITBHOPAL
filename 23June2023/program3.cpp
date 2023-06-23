 #include<iostream>
 #include<math.h>
 using namespace std;
int main(){
    int a = -10, b = -5, flag = 1, result =0 , i;
    int x = abs(a);
    int y = abs(b);
    for(int i=1; i<=x; i++){
        result +=y;

        if((a>=0 && b<0) || (a<0 && b>=0)){
            flag = -1;
            result *= flag;
        }
    }

    cout << result << endl;
}