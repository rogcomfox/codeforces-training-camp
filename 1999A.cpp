#include <iostream>
#include <vector>
using namespace std;

int findDigit(int number){
    int counter = 0;
    while (number > 0) {
        int currentDigit = number % 10;
        counter += currentDigit;
        number /= 10;
    }
    return counter;
}

int main(){
    int count;
    cin >> count;
    vector<int>number(count);
    for (int i = 0; i < count; i++){
        cin >> number[i];
    }
    for(int j = 0; j < count; j++){
        cout << findDigit(number[j]) << endl;
    }
}