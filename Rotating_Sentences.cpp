#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<string> sentences;
    string current_sentence;
    size_t max_length = 0;
    while (sentences.size() < 100 && getline(cin, current_sentence)) {
        sentences.push_back(current_sentence);
        if (current_sentence.length() > max_length) {
            max_length = current_sentence.length();
        }
    }

    for (size_t i = 0; i < max_length; i++){
        for (size_t j = sentences.size(); j > 0; j--){
            const string& sentence = sentences[j - 1];
            if (i < sentence.length()){
                cout << sentence[i];
            }else{
                cout << ' ';
            }
        }
        cout << "\n";
    }
    return 0;
}