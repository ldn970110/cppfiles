#include <bits/stdc++.h>
using namespace std;

int main(){

    int A, B, a, b;
    cin >> A >> B;
    a = max(A, B);
    b = min(A, B);
    cout << a - b << endl;
    return 0;
    
}