#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector<string>res(count);
    for(int i=0;i < count; i++){
        string ticket;
        cin >> ticket;
        int a = 0;
        int b = 0;
        for(int j=0; j < ticket.length(); j++){
            if(j < 3){
                a += (ticket[j] - '0');
            } else {
                b += (ticket[j] - '0');
            }
        }
        if (a != b){
            res[i] = "NO";
        } else {
            res[i] = "YES";
        }
    }
    for(int k=0; k < count; ++k){
        cout << res[k] << endl;
    }
}