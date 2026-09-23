#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    float meal_cost, total;
    int tip_percent, tax_percent;
    cin >> meal_cost;
    cin >> tip_percent;
    cin >> tax_percent;
    total = meal_cost + (meal_cost * (tip_percent / 100.0)) + (meal_cost * (tax_percent / 100.0));
    cout << round(total) << "\n";
    return 0;
}