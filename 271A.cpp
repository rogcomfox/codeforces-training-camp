#include<iostream>
using namespace std;

bool isUnique(int n){
    bool seen[10] = {false};
    n = std::abs(n);
    
    if (n == 0) return true;

    while (n > 0) {
        int digit = n % 10;
        if (seen[digit]) return false;
        seen[digit] = true;
        n /= 10;
    }
    return true;
}

int main(){
    int year;
    cin >> year;
    int result = 0;
    for(int i = year+1; i <= 10000; i++){
        bool res = isUnique(i);
        if(res){
            result = i;
            break;
        }
    }
    cout << result << endl;
}