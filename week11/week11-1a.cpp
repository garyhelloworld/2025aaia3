// week11-1a.cpp
// SOIT106_ADVANCE_004
#include <cctype> // 提供 isupper, tolower 等函式
using namespace std;

int main()
{
    char c;
    // 循環讀取輸入的字元
    while ( cin >> c ) {
        // 檢查是否為大寫字母
        if ( isupper(c) ) c = tolower(c);
        // 檢查是否為小寫字母
        else if ( islower(c) ) c = toupper(c);

        cout << c; // 輸出轉換後的字元
    }
    // 輸出一個換行
    cout << "\n";


}
