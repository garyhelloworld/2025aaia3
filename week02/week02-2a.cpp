// week02-2a.cpp Part 1
// SOIT106_ADVANCE_001 Using C++
#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	string ans;
	cin >> a;
	int n = a.length();
	for(int i = n-1; i >= 0; i--){
		ans += a[i];
	}
	cout << ans;
}
