#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    while(cin >> n){
        if (n < 0) break;
        cout << (n * (n + 1)) / 2 + 1 << '\n';
    }
    return 0;
}