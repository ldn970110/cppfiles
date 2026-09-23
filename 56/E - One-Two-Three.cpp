#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        if (s.length() == 5){
            cout << "3\n";
        }else{
            int count = 0;
            if (s[0] == 'o') count++;
            if (s[1] == 'n') count++;
            if (s[2] == 'e') count++;
            if (count >= 2){
                cout << "1\n";
            }else{
                cout << "2\n";
            }
        }
    }

    return 0;
}