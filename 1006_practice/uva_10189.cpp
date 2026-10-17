#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int n, m;
    int f = 1;
    while(cin >> n >> m){
        if(n == 0 && m == 0) break;
        vector<string> grid(n);
        for(int i = 0; i < n; i++){
            cin >> grid[i];
        }
        
        cout << "Field #" << f++ << ":\n";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '*'){
                    cout << '*';
                }else{
                    int count = 0;
                    for(int k = 0; k < 8; k++){
                        int ni = i + dy[k];
                        int nj = j + dx[k];
                        if(ni >= 0 && ni < n && nj >= 0 && nj < m){
                            if(grid[ni][nj] == '*'){
                                count++;
                            }
                        }
                    }
                    cout << count;
                }
            }
            cout << '\n';
        }

    }

    return 0;
}