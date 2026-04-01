#include <iostream>
using namespace std;

int main(){
    string standing;
    cin >> standing;
    int counter = 1;
    for (int i = 1; i <= standing.length(); i++){
        if(standing[i] == standing[i-1]){
            counter += 1;
            if(counter == 7){
                cout << "YES" << endl;
                return 0;
            }
        } else {
            counter = 1;
        }
    }
    cout << "NO" << endl;
    return 0;
}