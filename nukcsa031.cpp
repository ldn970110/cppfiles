#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, m = 0;
    cin >> a >> b >> c;
    m = max(a, b);
    m = max(m, c);
    cout << m << '\n';
    return 0;
}