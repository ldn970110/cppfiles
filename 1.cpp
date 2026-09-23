# include <iostream>

int main(){
    std::string name;
    int score;
    std::cout<<"輸入姓名與分數:";
    std::cin >> name >> score ;
    std::cout << name << "得分為:" << score << '\n';
    return 0;
}