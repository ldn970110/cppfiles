#include <iostream>
using namespace std;

int g(int n){
    if (n < 10){
        return n;
    }
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return g(sum);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(cin >> n){
        if (n == 0) break;
        cout << g(n) << '\n';
    }
    return 0;
}