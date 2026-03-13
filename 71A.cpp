// Way Too Long Words (71A)

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector<string> words(count);
    for(int i = 0; i < count; ++i){
        cin >> words[i];
    }
    for(const auto& element : words){
        if(element.length() < 10){
            cout << element << "\n";
        } else {
            int len = element.length();
            cout << element.at(0) << len - 2 << element.at(len - 1) << "\n";
        }
    }
}