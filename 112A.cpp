// Petya and Strings (112A)

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string a, b;
    cin >> a;
    cin >> b;
    transform(a.begin(), a.end(), a.begin(),
        [](unsigned char c){ return std::tolower(c); });
    transform(b.begin(), b.end(), b.begin(),
        [](unsigned char d){ return std::tolower(d); });
    
    if (a > b){
        cout << 1 << endl;
    }
    else if (a < b){
        cout << -1 << endl;
    }
    else if (a == b){
        cout << 0 << endl;
    }
}