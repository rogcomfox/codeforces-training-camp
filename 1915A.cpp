#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector<int>res(count);
    for(int i = 0; i < count; i++){
        int a,b,c;
        cin >> a;
        cin >> b;
        cin >> c;
        if(a == b){
            res[i] = c;
        }
        else if(b == c){
            res[i] = a;
        }
        else if(c == a){
            res[i] = b;
        }
    }
    for(int j = 0; j < count; j++){
        cout << res[j] << endl;
    }
}