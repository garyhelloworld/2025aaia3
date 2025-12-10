// week11-1b.cpp
// SOIT106_ADVANCE_004
#include <iostream>
using namespace std;

int main()
{
    char c;
    while ( cin >> c ) {
        // 大寫轉小寫：c - 'A' + 'a'
        if (c>='A' && c<='Z') c = c - 'A' + 'a';
        // 小寫轉大寫：c - 'a' + 'A'
        else if (c>='a' && c<='z') c = c - 'a' + 'A';

        cout << c; // 輸出轉換後的字元
    }
    cout << "\n";
}
