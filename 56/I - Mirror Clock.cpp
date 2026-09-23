#include <bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >> T;
    while (T--){
        int hour, minute;
        char colon;
        cin >> hour >> colon >> minute;
        if (minute == 0){
            hour = 12 - hour;
        }else{
            minute = 60 - minute;
            hour = 11 - hour;
        }
        if (hour <= 0){
            hour += 12;
        }

        cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute << "\n";
    }
    return 0;

}