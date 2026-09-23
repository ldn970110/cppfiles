# include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++){
        string s;
        cin >> s;
        int n = s.length();
        cout << "Case " << tt+1 << ": ";
        for (int i = 0; i < n;){
            char c = s[i++];
            int count = 0;
            while (i < n && isdigit(s[i])) {
                count = count * 10 + (s[i] - '0');
                i++;
            }
            for (int j = 0; j < count; j++){
                cout << c;
            }
        }
        cout << "\n";
    }
    return 0;
}