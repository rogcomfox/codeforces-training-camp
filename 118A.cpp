// String Task (118A)

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string a;
    vector<char> vowels = {'a', 'o', 'y', 'e', 'u', 'i'};
    string res = "";
    cin >> a;
    for (char c : a){
        char lower = static_cast<char>(tolower(static_cast<unsigned char>(c)));
        auto isVowels = find(vowels.begin(), vowels.end(), lower);
        if (isVowels == vowels.end()){
            res += '.';
            res += lower;
        }
    }
    cout << res << endl;
}