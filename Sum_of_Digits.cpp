#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, sum = 0;
    cin >> N;
    sum = N / 100 + (N / 10) % 10 + N % 10;
    cout << sum << '\n';
    return 0;
}