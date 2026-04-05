#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string bef;
    cin >> bef;
    unordered_set<char>res;
    string result = "";
    for(char c : bef){
        if(res.find(c) == res.end()){
            res.insert(c);
            result += c;
        }
    }
    if(result.length() % 2 != 0){
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
}