#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << fixed << setprecision(3);
    const unordered_map<char, double> molar_mass = {
        {'C', 12.01},
        {'H', 1.008},
        {'O', 16.00},
        {'N', 14.01}
    };

    int t;
    if (!(cin >> t)) {return 0;}
    while (t--){
        string formula;
        cin >> formula;
        double total_mass = 0.0;
        int n = formula.length();

        for (int i = 0; i < n;){
            int count = 0;
            if (isalpha(formula[i])){
                char element = formula[i];
                i++;
                while (i < n && isdigit(formula[i])){
                    count = count * 10 + (formula[i] - '0');
                    i++;
                }
                if (count == 0) count = 1;
                total_mass += molar_mass.at(element) * count;
            }
        }
        cout << total_mass << "\n";
    }           
    return 0;
}