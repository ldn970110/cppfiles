#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int  l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l1 <= r2 && l2 <= r1){
        cout << "overlap" << "\n";
    } else {
        cout << "disjoint" << "\n";
    }

    return 0;
}