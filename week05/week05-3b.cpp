/// week05-3b.cpp Part1 input Part2 output
/// Part3 stringstream Part4 reverse
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
    string line;
    while (getline(cin, line)){
        stringstream ss(line);
        string word;
        while(ss >> word){
            reverse(word.begin(), word.end());
            cout << "Åª¨ì¤F" << word << endl;
        }
        cout << line << endl;
    }

}
