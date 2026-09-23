#include <bits/stdc++.h>
using namespace std;

const string MONTHS[] = {
    "", "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

const int DAYS_PER_MONTH[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int getDays(int y, int m) {
    if (m == 2) return isLeap(y) ? 29 : 28;
    return DAYS_PER_MONTH[m];
}

int monthToIndex(const string& name) {
    for (int i = 1; i <= 12; i++) {
        if (MONTHS[i] == name) return i;
    }
    return 1;
}

int main(){
    int T;
    cin >> T;
    for (int t = 0; t < T; t++){
        string date;
        int K;
        cin >> date >> K;
        stringstream ss(date);
        string yStr, mStr, dStr;
        getline(ss, yStr, '-');
        getline(ss, mStr, '-');
        getline(ss, dStr, '-');

        int y = stoi(yStr);
        int m = monthToIndex(mStr);
        int d = stoi(dStr);

        while (K--){
            d++;
            if (d > getDays(y, m)){
                d = 1;
                m++;
                if (m > 12){
                    m = 1;
                    y++;
                }
            }
        }
        cout << "Case " << t + 1 << ": " << y << "-" << MONTHS[m] << "-" << setfill('0') << setw(2) << d << "\n";
    }
    return 0;
}
