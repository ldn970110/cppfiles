#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    if ((N % 3 == 0) && (N % 5 == 0)){
        cout << "YES" << '\n';
    } else{
        cout << "NO" << '\n';
    }
    return 0;
}