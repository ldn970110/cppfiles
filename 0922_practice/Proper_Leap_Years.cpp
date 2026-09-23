#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int Y;
    cin >> Y;
    if (((Y % 4 == 0) && (Y % 100 != 0))){
        cout << "Yes\n";
    } else if (Y % 400 == 0){
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}