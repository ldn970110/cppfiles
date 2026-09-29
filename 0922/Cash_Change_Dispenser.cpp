#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int c, total = 0;
    cin >> c;
    while (c > 0){
        if (c - 50 >= 0){
            total +=1;
            c -= 50;
        }else if (c - 10 >= 0){
            total += 1;
            c -= 10;
        }else if (c - 5 >= 0){
            total += 1;
            c -= 5;
        }else if (c - 1 >= 0){
            total += 1;
            c -= 1;
        }
    }
    cout << total << '\n';
    return 0;
}