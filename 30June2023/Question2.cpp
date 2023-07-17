#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> ans;
     int count = 0;
    int k = 12;
    int arr[4] = {2, 4, 5, 3};

    for (int i = 0; i < 4; i++) {
        vector<int> n;
        if (arr[i] <= k) {
            n.push_back(arr[i]);
        }
        ans.push_back(n);
    }

    int s = 0, e = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            vector<int> r;
            if (arr[s] * arr[e] <= k) {
                r.push_back(arr[s]);
                r.push_back(arr[e]);
                ans.push_back(r);

            }
            e++;
        }
        s++;
        e = s + 1;
    }

   
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
            count++;
        }
        cout << endl;
    }
    cout << "count = " << count << endl;

    return 0;
}
