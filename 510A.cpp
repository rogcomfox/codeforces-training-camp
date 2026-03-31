#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    bool zigzag = true;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            if(i % 2 == 0){
                int res = i / 2;
                if (res % 2 != 0){
                    if (j == b){
                        cout << "#";
                    } else {
                        cout << ".";
                    } 
                } else {
                    if (j == 1){
                        cout << "#";
                    } else {
                        cout << ".";
                    }
                }
            } else {
                cout << "#";
            }
        }
        cout << endl;
    }
}