#include <iostream>
#include <vector>

using namespace std;

vector<int> SmallestMultipleFactors(int num) {
    vector<int> factors;

    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }

    return factors;
}

bool isPossible(vector<int> factor){
    if(factor.size() == 1){
        return true;
    }

    return false;
}
int main() {
    int number;
    cin >> number;

    cout << "Smallest multiple factors are " << endl;

    vector<int> factors = SmallestMultipleFactors(number);

    if(isPossible(factors)){
        cout << "Imposssible" << endl;
    }
    else{

    for (int i = 0; i < factors.size(); i++) {
        cout << factors[i] << " ";
    }
    cout << endl;
    }

    return 0;
}
