#include <iostream>
using namespace std;

int main(){
    long long count;
    cin >> count;
    if(count % 2 == 0){
        cout << count / 2 << endl;
    } else {
        cout << (count + 1) / 2 * -1 << endl;
    }
}