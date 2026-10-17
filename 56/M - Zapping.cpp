#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    while(cin >> a >> b){
        if (a == -1 && b == -1){
            break;
        }
        int up = (b - a + 100) % 100;
        int down = (a - b + 100) % 100;
        cout << min(up, down) << '\n';
    }
    return 0;
}