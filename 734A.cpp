// Anton and Danik (734A)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int count;
    cin >> count;
    string res = "";
    for (int i = 0; i < count; ++i){
        char letter;
        cin >> letter;
        res += letter;
    }
    char danik = 'D';
    char anton = 'A';
    int countDanik = std::count(res.begin(), res.end(), danik);
    int countAnton = std::count(res.begin(), res.end(), anton);

    if (countDanik > countAnton){
        cout << "Danik" << endl;
    }
    else if (countDanik < countAnton){
        cout << "Anton" << endl;
    } else {
        cout << "Friendship" << endl;
    }
}