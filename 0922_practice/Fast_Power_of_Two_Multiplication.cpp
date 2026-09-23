#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, k;
    cin >> a >> k;
    cout << a * (1LL << k) << "\n";

    return 0;
}