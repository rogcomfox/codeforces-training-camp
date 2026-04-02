#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector<vector<string>>words(count, vector<string>(2));
    for(int i = 0; i < count; ++i){
        string a, b;
        cin >> a;
        cin >> b;
        char temp;
        temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        words[i][0] = a;
        words[i][1] = b;
    }
    for(int j = 0; j < count; ++j){
        cout << words[j][0] << " " << words[j][1] << endl;
    }
}