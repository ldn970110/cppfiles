#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "equilateral" << "\n";
        } else if (a == b || b == c || a == c) {
            cout << "isosceles" << "\n";
        } else {
            cout << "scalene" << "\n";
        }
    }else{
        cout << "invalid" << "\n";
    }

    return 0;   
}