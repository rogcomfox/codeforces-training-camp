#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    int counter = 0;
    while(a <= b){
        a *= 3;
        b *= 2;
        counter += 1;
    }
    cout << counter << endl;
}