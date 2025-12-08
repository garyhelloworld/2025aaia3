/// week05-3c.cpp Part1 input Part2 output
/// Part3 stringstream Part4 reverse
/// Part5 火車頭 +車廂+車廂+車廂
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
    string line;
    while (getline(cin, line)){
        stringstream ss(line);
        string word;
        ss >> word;
        reverse (word.begin(), word.end());
        cout << word;
        while(ss >> word){
            reverse(word.begin(), word.end());
            cout << " " << word;
        }
        cout << endl;
    }

}
