/// week05-2.cpp
/// 熟悉 stringstream
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    cout << "輸入一段英文 裡面可以有空格: ";
    string s;
    getline (cin, s);
    cout << "讀到了s字串: ";

    stringstream ss(s);
    string word;
    while(ss >> word){
        cout << "有一個字: " << word << endl;
    }

}
