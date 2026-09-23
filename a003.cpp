# include <iostream>
using namespace std;

int s(int a, int b){
    return (a*2 + b)%3;
}

int main(){
    int M, D, S;
    cin >> M >> D;
    S = s(M, D);
    if (S == 0) {
        cout << "普通";
    } else if (S == 1) {
        cout << "吉";
    } else if (S == 2) {
        cout << "大吉";
    }
    return 0;
}