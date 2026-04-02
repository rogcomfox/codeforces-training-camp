#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector<char>res(count);
    for(int i = 0; i < count; i++){
        string check;
        cin >> check;
        int countA = 0;
        int countB = 0;
        for(char c : check){
            if(c == 'A'){
                countA += 1;
            } else {
                countB += 1;
            }
        }
        if(countA > countB){
            res[i] = 'A';
        } else {
            res[i] = 'B';
        }
    }
    for(int j=0; j < count; ++j){
        cout << res[j] << endl;
    }
}