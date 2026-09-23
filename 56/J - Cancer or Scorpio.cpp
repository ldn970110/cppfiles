#include <bits/stdc++.h>
using namespace std;

string get_zodiac(int month, int day) {
    if ((month == 1 && day >= 21) || (month == 2 && day <= 19)) {
        return "aquarius";
    }else if ((month == 2 && day >= 20) || (month == 3 && day <= 20)) {
        return "pisces";
    }
    else if ((month == 3 && day >= 21) || (month == 4 && day <= 20)) {
        return "aries";
    }else if ((month == 4 && day >= 21) || (month == 5 && day <= 21)) {
        return "taurus";
    }else if ((month == 5 && day >= 22) || (month == 6 && day <= 21)) {
        return "gemini";
    }else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) {
        return "cancer";
    }else if ((month == 7 && day >= 23) || (month == 8 && day <= 21)) {
        return "leo";
    }else if ((month == 8 && day >= 22) || (month == 9 && day <= 23)) {
        return "virgo";
    }else if ((month == 9 && day >= 24) || (month == 10 && day <= 23)) {
        return "libra";
    }else if ((month == 10 && day >= 24) || (month == 11 && day <= 22)) {
        return "scorpio";
    }else if ((month == 11 && day >= 23) || (month == 12 && day <= 21)) {
        return "sagittarius";
    }else{
        return "capricorn";
    }
}

int main(){
    struct tm time_info = {0};

    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        string date_str;
        cin >> date_str;
        int MM = stoi(date_str.substr(0, 2));
        int DD   = stoi(date_str.substr(2, 2));
        int YYYY  = stoi(date_str.substr(4, 4));
        time_info.tm_year = YYYY - 1900;
        time_info.tm_mon = MM - 1;
        time_info.tm_mday = DD;
        time_info.tm_mday += 280;
        mktime(&time_info);
        int Y = time_info.tm_year + 1900;
        int M = time_info.tm_mon + 1;
        int D = time_info.tm_mday;

        cout << i + 1 << " " << setfill('0') << setw(2) << M << '/' << setfill('0') << setw(2) << D << '/' << Y << " " << get_zodiac(M, D) << "\n";

    }
    return 0;
}