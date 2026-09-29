#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, d, n, S, Sq;
    cin >> a >> d >> n ;
    S = (n * ((2 * a) + ((n - 1) * d))) / 2;
    Sq = (n * (n + 1) * (2 * n + 1)) / 6;
    cout << "Sum = \"" << S << "\", SumSq = \"" << Sq << "\"" << '\n';
    return 0;
}