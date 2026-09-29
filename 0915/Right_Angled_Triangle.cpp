#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if (a * a + b * b == c * c){
        cout << "right" << endl;
    }else{
        cout << "wrong" << endl;
    }
    return 0;
}