#include <iostream>
using namespace std;

int main(){
    long long a;
    int b;
    cin >> a;
    cin >> b;
    for(int i = 0; i < b;++i){
        if(a % 10 == 0){
            a /= 10;
        } else {
            a -= 1;
        }
    }
    cout << a << endl;
}