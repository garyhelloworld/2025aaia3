// week 04-4.cpp
#include <iostream>
using namespace std;
int main(){
	int a, b; // part1:input
	while(cin >> a >> b){
		int ans = 0;
		int a2 = a, b2 = b;
		if(a2>b2) swap(a2, b2);
		for(int i = a2; i<=b2; i++){
			int now = 1; // part4
			int n = i;
			while (n != 1){ // part3
				if(n%2==1) n = 3*n+1;
				else n = n/2;
				now++; // part4
			}
			if(now > ans) ans = now; //
		}
		printf("%d %d %d\n", a, b, ans);
	} // part 2 : Output
}
