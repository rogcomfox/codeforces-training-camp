// Love Story (1829A)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int findDifference(string first, string second){
    int counter = 0;
    for(int i = 0; i < 10; i++){
        if(first[i] != second[i]){
            counter += 1;
        }
    }
    return counter;
}

int main(){
    int count;
    cin >> count;
    string match = "codeforces";
    vector<string>words(count);
    vector<int>countDiff(count, 0);
    for(int i = 0; i < count; i++){
        cin >> words[i];
    }
    for(int j = 0; j < count; ++j){
       countDiff[j] = findDifference(match, words[j]);
    }
    for(int k = 0; k < count; ++k){
        cout << countDiff[k] << endl;
    }
}