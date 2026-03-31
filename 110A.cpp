#include <iostream>
#include <cmath>
using namespace std;

int findDigit(long long number){
    int counter = 0;
    while (number > 0) {
        int currentDigit = number % 10;
        if (currentDigit == 4 || currentDigit == 7) {
            counter += 1;
        }
        number /= 10;
    }
    return counter;
}

int main(){
    long long number;
    cin >> number;
    int counter = findDigit(number);
    if (counter == 4 || counter == 7){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}