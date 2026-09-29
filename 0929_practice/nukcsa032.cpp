#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, max = 0;
    while (cin >>n){
        if (n == -1){
            break;
        }
        if (n > max){
            max = n;
        }
    }
    cout << max << '\n';
    return 0;
}