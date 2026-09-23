#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    bool opening = true;
    while(getline(cin, s)){
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '"'){
                if (opening){
                    cout << "``";
                }else{
                    cout << "''";
                }
                opening = !opening;
            }else{
                cout << s[i];
            }
        }
        cout << "\n";
    }
    return 0;
}