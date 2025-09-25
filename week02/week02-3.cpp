// week02-3.cpp Part 2 使用c++2011年新版字串stoi功能
// 在codeblocks 裡， 必須開啟 setting - compiler... 把c++11打勾
// SOIT106_ADVANCE_001 Using C++
#include <iostream> //cin cout 潛入資料 印出資料
#include <string> // string 字串功能
using namespace std; // 使用"命名空間" 標準std
int main(){
	string a; // 宣告字串
	cin >> a; // 讀入字串
	string ans; //宣告字串 ans 放答案用

	int n = a.length(); //字串 a 的長度
	for(int i = n-1; i >= 0; i--){ // 倒過來的迴圈
		ans += a[i]; // 在迴圈裡 ，把a[i]塞到 ans 的後面
	}
	cout << a << '+' << stoi(ans) <<'='
		 << stoi(a) + stoi(ans) << endl;
} // stoi() is string to int 把"字串" 變成整數
