# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d, e;
        cin >> a >> b >> c >> d;
        if ((b - a) == (c - b)){
            e = d + (b - a);
        }else{
            e = d * (b / a);
        }
        cout << a << " " << b << " " << c << " " << d << " " << e << "\n";
    }
    return 0;
}