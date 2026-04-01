#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector<string>words(count);
    for(int i = 0; i < count; i++){
        cin >> words[i];
    }
    int counter = 0;
    for(int j = 0; j < count; j++){
        if(words[j] == "Tetrahedron"){
            counter += 4;
        }
        else if (words[j] == "Cube"){
            counter += 6;
        }
        else if (words[j] == "Octahedron"){
            counter += 8;
        }
        else if(words[j] == "Dodecahedron"){
            counter += 12;
        }
        else if (words[j] == "Icosahedron"){
            counter += 20;
        }
    }
    cout << counter << endl;
}