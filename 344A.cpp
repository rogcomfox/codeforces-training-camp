#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector<string>words(count);
    for (int i = 0; i < count; ++i){
        cin >> words[i];
    }
    string temp = "";
    int counter = 0;
    for (int j = 0; j < count; ++j){
        if(words[j] != temp){
            temp = words[j];
            counter += 1;
        }
    }
    cout << counter << endl;
}