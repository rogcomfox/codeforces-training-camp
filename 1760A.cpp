#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector<int>result(count, 0);
    for(int i = 0; i < count; ++i){
        int a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        int sum = a + b + c;
        int minVal = min({a,b,c});
        int maxVal = max({a,b,c});
        result[i] += sum - minVal - maxVal;
    }
    for(int j : result){
        cout << j << endl;
    }
}