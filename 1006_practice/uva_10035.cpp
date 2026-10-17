#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    while (cin >> a >> b){
        if (a == 0 && b == 0){
            break;
        }
        int count = 0, carry = 0, n;
        while(a > 0 || b > 0){
            n = (a % 10) + (b % 10) + carry;
            if (n >= 10){
                carry = 1;
                count += 1;
            }else{
                carry = 0;
            }
            a /= 10;
            b /= 10;;
        }
        if(count == 0){
            cout << "No carry operation." << '\n';
        }else if(count == 1){
            cout << "1 carry operation." << '\n';
        }else{
            cout << count << " carry operations." << '\n';
        }
    }
    return 0;
}