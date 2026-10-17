#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while (cin >> n) {
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        
        vector<bool> jolly(n, false);
        bool is_jolly = true;
        for (int i = 1; i < n; i++) {
            int diff = abs(nums[i] - nums[i - 1]);
            if (diff < 1 || diff >= n || jolly[diff]) {
                is_jolly = false;
                break;
            }
            jolly[diff] = true;
        }
        if (is_jolly) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}