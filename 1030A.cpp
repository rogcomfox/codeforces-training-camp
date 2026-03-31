#include <iostream>
#include <vector>
using namespace std;

int main(){
    int number;
    cin >> number;
    bool isHard = false;
    vector<int>res(number);
    for(int i = 0; i < number; ++i){
        cin >> res[i];
    }
    for(int j = 0; j < number; j++){
        if(res[j] == 1){
            isHard = true;
            break;
        }
    }
    if(isHard){
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
}