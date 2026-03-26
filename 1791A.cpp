// Codeforces Checking (1791A)

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector<char> vowels = {'c', 'o', 'd', 'e', 'f', 'r', 's'};
    string res = "";
    for(int i = 0; i < count; ++i){
        char letter;
        cin >> letter;
        res += letter;
    }
    for(char c : res){
        auto isFound = find(vowels.begin(), vowels.end(), c);
        if(isFound != vowels.end()){
            cout << "YES" << endl;
        } else {
            cout << "NO" <<endl;
        }
    }
}