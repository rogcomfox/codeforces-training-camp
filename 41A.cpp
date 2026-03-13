#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s, t;
    cin >> s;
    cin >> t;
    if(s.length() != t.length()){
        cout << "NO" << endl;
    } else {
        int start = 0;
        int end = t.length() - 1;
        while(start < end){
            swap(t[start], t[end]);
            start++;
            end--;
        }
        if (s == t){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}