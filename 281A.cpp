// Word Capitalization (281A)

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin >> a;
    a[0] = static_cast<string::value_type>(std::toupper(static_cast<unsigned char>(a[0])));
    cout << a << endl;
}