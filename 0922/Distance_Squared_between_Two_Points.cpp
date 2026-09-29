#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, y1, x2, y2, D;
    cin >> x1 >> y1 >> x2 >> y2;
    D = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
    cout << D << '\n';
    return 0;
}