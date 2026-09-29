#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        for(int x = 0; x < b; x++){
            for(int i = 1; i <= a; i++){
            for(int j = 0; j < i; j++){
                cout << i;
            }
            cout << "\n";
        }
        for(int i = a - 1; i > 0; i--){
            for(int j = 0; j < i; j++){
                cout << i;
            }
            cout << "\n";
        }
        cout << "\n";
        }
    }
    return 0;
}