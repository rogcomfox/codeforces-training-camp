#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector<vector<int>>matrix(count, vector<int>(2));
    for(int i = 0; i < count; i++){
        cin >> matrix[i][0];
        cin >> matrix[i][1];
    }
    for(int j = 0; j < count; j++){
        int hour = matrix[j][0] * 60;
        int minutes = hour + matrix[j][1];
        cout << 1440 - minutes << endl;
    }
}