#include <iostream>
using namespace std;

int main(){
    int count;
    cin >> count;
    int counter = 0;
    for(int i = 0; i < count; i++){
        int occupy, capacity;
        cin >> occupy;
        cin >> capacity;

        if(capacity - occupy >= 2){
            counter++;
        }
    }
    cout << counter << endl;
}