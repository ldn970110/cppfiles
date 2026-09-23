#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    while(n--){
        int h, m, T;
        char c;
        cin >> h >> c >> m;
        while(true){
            m++;
            if (m == 60){
                m = 0;
                h = (h + 1) % 24;
            }

            T = h * 100 + m;
            string s = to_string(T), ss = to_string(T);
            reverse(ss.begin(), ss.end());
            if (s == ss){
                cout << setw(2) << setfill('0') << h << ':' << setw(2) << setfill('0') << m << "\n";
                break;
            }
        }
    }

    return 0;
}