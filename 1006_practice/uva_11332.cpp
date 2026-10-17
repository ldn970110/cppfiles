#include <bits/stdc++.h>
using namespace std;

int f(int x){
    int t = 0;
    while(x > 0){
        t += x % 10;
        x /= 10;
    }
    if(t >= 10){
        return f(t);
    }else{
        return t;
    }
}

int main(){

    int n;
    while(cin >> n){
        if (n == 0) break;
        cout << f(n) << '\n';
    }

    return 0;
}

