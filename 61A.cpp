#include <iostream>
using namespace std;

int main(){
    string a, b;
    cin >> a;
    cin >> b;
    string res = "";
    for(int i=0; i < a.length(); i++){
        if(a[i] != b[i]){
            res += '1';
        } else {
            res += '0';
        }
    }
    cout << res << endl;
}