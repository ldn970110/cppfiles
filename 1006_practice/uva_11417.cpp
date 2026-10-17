#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    while(cin >> N){
        if (N == 0) break;
        int G = 0;
        for(int i = 1; i < N; i++){
            for(int j = i+1; j <= N; j++){
                G += gcd(i, j);
            }
        }
        cout << G << '\n';
    }

}