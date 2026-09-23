#include <bits/stdc++.h>
using namespace std;

int get(const string &a, const string &b, int k){
    for (int i = k; i > 0; --i){
        if (a.compare(k - i, i, b, 0, i) == 0){
            return i;
        }
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--){
        int k, w;
        cin >> k >> w;
        vector<string> words(w);
        for (int i = 0; i < w; i++){
            cin >> words[i];
        }
        int total = k;
        for (int i = 0; i < w - 1; i++){
            total += k - get(words[i], words[i + 1], k);
        }
        cout << total << "\n";
    }
}