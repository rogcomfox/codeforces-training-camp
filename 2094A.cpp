#include <iostream>
#include <string>
#include <vector>
using namespace std;

string firstLetter(string data){
    string res = "";
    bool isSpace = true;
    for(int i = 0; i < data.length(); i++){
        if(data[i] == ' '){
            isSpace = true;
        }
        else if (data[i] != ' ' && isSpace == true){
            res.push_back(data[i]);
            isSpace = false;
        }
    }
    return res;
}

int main(){
    int count;
    cin >> count;
    vector<string>words;
    string sentence;
    for(int i = 0; i <= count; i++){
        getline(cin, sentence);
        words.push_back(sentence);
    }
    for(int j = 1; j <= count; j++){
        cout << firstLetter(words[j]) << endl;
    }
}