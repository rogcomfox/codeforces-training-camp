#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int count;
    int x = 0;
    cin >> count;
    vector<string> words(count);
    for(int i = 0; i < count; ++i){
        cin >> words[i];
    }
    for(const auto& element : words){
        if(element[1] == '+'){
            ++x;
        } else {
            --x;
        }
    }
    cout << x << endl;
}