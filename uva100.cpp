#include <bits/stdc++.h>
using namespace std;

int abc(long long n, int k){

    if(n==1) return k;
    else if(n%2==0) return abc(n/2, k+1);
    else return abc(n*3+1, k+1);

}

int main(){
    
    int i, j, a, b;
    while(cin >> i >> j){
        a =  min(i, j);
        b =  max(i, j);
        int max_len = 0;
        for(int k = a; k <= b; k++){
            max_len = max(max_len, abc(k, 1));
        }
        cout << i << " " << j << " " << max_len << endl;
    }

    return 0;
}