#include <iostream>
using namespace std;

int main(){
    int count;
    int crimeNotHandled = 0;
    int police = 0;
    cin >> count;
    for (int i = 0; i < count; i++){
        int res;
        cin >> res;
        if(res < 0){
            int handling = res + police;
            if(handling < 0){
                crimeNotHandled += 1;
            } else {
                police = handling;
            }
        } else {
            police += res;
        }
    }
    cout << crimeNotHandled << endl;
}