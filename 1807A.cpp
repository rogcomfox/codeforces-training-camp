#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector<char>res(count);
    for(int i = 0;i < count; i++){
        int a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        if(a + b == c){
            res[i] = '+';
        } else if(a - b == c){
            res[i] = '-';
        }
    }
    for(int j = 0; j < count; j++){
        cout << res[j] << endl;
    }
}