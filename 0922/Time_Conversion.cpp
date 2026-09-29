#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int H, M, s;
    cin >> s;
    M = s / 60;
    s = s % 60;
    H = M / 60;
    M = M % 60;
    cout << H << ':' << M << ':' << s << '\n';
    return 0;
}