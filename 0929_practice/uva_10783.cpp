#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T, a, b, aa, bb;
    cin >> T;
    for (int i = 0; i < T; i++){
        int total = 0;
        cin >> a;
        cin >> b;
        aa = min(a, b);
        bb = max(a, b);
        for(; aa <= bb; aa++){
            if(aa % 2){
                total += aa;
            }
        }
        cout << "Case " << i+1 << ": " << total << '\n';
    }
    return 0;
}