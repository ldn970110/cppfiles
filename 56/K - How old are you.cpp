#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++){
        int d1, m1, y1, d2, m2, y2;
        char c1, c2;
        cin >> d1 >> c1 >> m1 >> c2 >> y1; // current date
        cin >> d2 >> c1 >> m2 >> c2 >> y2; //bitrh day
        
        int age = y1 - y2;
        if (m1 < m2 || (m1 == m2 && d1 < d2)){
            age--;
        }

        if (age < 0){
            cout << "Case #" << i << ": Invalid birth date" << "\n";
        }else if (age > 130){
            cout << "Case #" << i << ": Check birth date" << "\n";
        }else{
            cout << "Case #" << i << ": " << age << "\n";
        }
    }
    
    return 0;
}