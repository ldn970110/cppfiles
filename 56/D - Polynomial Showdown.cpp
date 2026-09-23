#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> c(9);
    while (cin >> c[8]){
        for (int i = 7; i >= 0; i--){
            cin >> c[i];
        }

        bool isfirst = true;

        for (int i = 8; i >= 0 ; i--){
            if (c[i] == 0) continue;

            int n = c[i];
            
            if (isfirst){
                if (n < 0){
                    cout << "-";
                }
                isfirst = false;
            }else{
                if (n < 0){
                    cout << " - ";
                }else{
                    cout << " + ";
                }
            }

            if (abs(n) != 1 || i == 0){
                cout << abs(n);
            }

            if (i > 1){
                cout << "x^" << i;
            }else if (i == 1){
                cout << "x";
            }
        }

        if (isfirst){cout << 0;}
        cout << "\n";
    }
    return 0;
}
    
