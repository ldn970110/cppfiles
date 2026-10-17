#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    typedef long long ll;
    ll a, b;
    while (cin >> a >> b){
        while(b > a){
            b -= a;
            a ++;
        }
        cout << a << '\n';
    }

    return 0;
}