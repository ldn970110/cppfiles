#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 11 == 0){
        cout << n << " is a multiple of 11." << endl;
    }else{
        cout << n << " is not a multiple of 11." << endl;
    }
    return 0;
}