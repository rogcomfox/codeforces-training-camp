#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector<string>result(count);
    for(int i = 0; i < count; i++){
        int a,b,c;
        cin >> a;
        cin >> b;
        cin >> c;
        if(b > a && b < c){
            result[i] = "STAIR";
        }
        else if(b > a && b > c){
            result[i] = "PEAK";
        } else {
            result[i] = "NONE";
        }
    }
    for (int j = 0; j < count; j++){
        cout << result[j] << endl;
    }
}