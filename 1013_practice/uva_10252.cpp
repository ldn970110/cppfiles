#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2;
    while(getline(cin, s1) && getline(cin, s2)){
        vector<int> countA(26, 0);
        vector<int> countB(26, 0);

        for (char c : s1) {
            if (c >= 'a' && c <= 'z') countA[c - 'a']++;
        }
        for (char c : s2) {
            if (c >= 'a' && c <= 'z') countB[c - 'a']++;
        }

        string r;
        for(int i = 0; i < 26; i++){
            int minCount = min(countA[i], countB[i]);
            r += string(minCount, 'a' + i);
        }
        cout << r << endl;
    }

    return 0;
}