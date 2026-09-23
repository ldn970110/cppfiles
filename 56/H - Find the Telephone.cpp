#include <bits/stdc++.h>
using namespace std;

char getChar(char c){
    string table = "22233344455566677778889999";
    return ((c >= 'A' && c <= 'Z')? table[c - 'A'] : c);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    while(cin >> s){
        int n = s.size();
        for (size_t i = 0; i < n; i++){
            cout << getChar(s[i]);
        }
        cout << "\n";
    }
}