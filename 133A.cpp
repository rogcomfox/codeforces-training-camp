#include <iostream>
using namespace std;

int main(){
    string res;
    cin >> res;
    for(char c : res){
        if(c >= 33 && c <= 126){
            if(c == 'H' || c == 'Q' || c == '9'){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}