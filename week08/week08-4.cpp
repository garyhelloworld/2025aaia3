/// week 08-4.cpp
/// 數字黑洞 卡不列克常數 6174(大到小-小到大 重複7次)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cout << "輸入任意4位數(都不同):";
    int n;
    cin >> n;
    for(int i = 0; i<7; i++){ /// 七步內 必掉到黑洞6174
        vector<int> a; /// 伸縮自如的矩陣
        while(n>0){ /// 剝皮法
            a.push_back(n%10); /// 把她推到陣列裡面
            n = n / 10;

        }
        sort(a.begin(), a.end()); ///陣列小到大排好
        int M = a[3]*1000 + a[2]*100 + a[1]*10 + a[0];
        int m = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];

        n = M-m;
        cout << M << "減掉" << "得到" <<  n << endl;

    }
}
