#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0) break;
        queue<int> q;
        for(int i = 0; i < n; i++){
            q.push(i + 1);
        }
        vector<int> discarded;
        while (q.size() > 1) {
            discarded.push_back(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout << "Discarded cards:";
        for (size_t i = 0; i < discarded.size(); i++) {
            if (i == 0) {
                cout << " " << discarded[i];
            } else {
                cout << ", " << discarded[i];
            }
        }
        cout << "\n";

        cout << "Remaining card: " << q.front() << "\n";
    }
    return 0;
}