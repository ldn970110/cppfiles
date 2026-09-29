#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--){
        string a, b;
        cin >> a >> b;
        int c = 0, lena = a.length(), lenb = b.length(),maxlen = max(lena, lenb);
        string ans = "";
        for(int i = 0; i < maxlen; i++){
            if(i < lena) c += (a[i] - '0');
            if(i < lenb) c += (b[i] - '0');
            ans += c % 10 + '0';
            c /= 10;
        }
        if(c > 0) ans += c % 10 + '0';

        while(ans.length() > 1 && ans.back() == '0') {
            ans.pop_back();
        }

        size_t s = 0;
        while(s < ans.length() && ans[s] == '0') s++;
        
        if(s == ans.length()) {
            cout << "0\n";
        } else {
            cout << ans.substr(s) << '\n';
        }
    }
    return 0;
}
