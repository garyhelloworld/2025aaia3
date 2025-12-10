// week07-1.cpp 第2個長方形交集的面積
// TAICA 交大基礎程式設計(C++) 期中考題 第2題
#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3, x4; // x坐標
    int y1, y2, y3, y4; // y坐標
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int ans = 0;
    for (int x=x1; x<x2; x++) { // 依序檢查第1個長方形的格子
        for (int y=y1; y<y2; y++){
            if (x3<=x && x<x4 && y3<=y && y<y4) ans++;
        }
    }
    cout << ans;
}
