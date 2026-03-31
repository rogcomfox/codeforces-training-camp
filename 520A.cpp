// Pangram (520A)
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    string sentence = "";
    vector<bool>alphabet(26, false);
    for(int i = 0;i < count; ++i){
        char letter;
        cin >> letter;
        sentence += letter;
    }
    for(char element : sentence){
        if (isalpha(static_cast<unsigned char>(element))) {
            char lower_c = tolower(static_cast<unsigned char>(element));
            alphabet[lower_c - 'a'] = true;
        }
    }
    bool res = all_of(alphabet.begin(), alphabet.end(), [](bool i) { return i; });
    if(res){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}