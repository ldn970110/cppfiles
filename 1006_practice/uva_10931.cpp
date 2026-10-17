#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i;
    while(cin >> i){
        if (i == 0) break;
        string b = "";
        int p = 0;
        while (i > 0) {
            int t = i % 2;
            if (t == 1) {
                p++;
            }
            b += t + '0';
            i /= 2;
        }
        reverse(b.begin(), b.end());
        cout << "The parity of " << b << " is " << p << " (mod 2).\n";

    }
    return 0;
}