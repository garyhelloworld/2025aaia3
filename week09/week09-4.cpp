// week09-4.cpp
// SLJ-Array-016
#include <iostream>
#include <cstdio> // 使用了 printf
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,n;

    cin >> n;
    // 讀取矩陣 A
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
    // 讀取矩陣 B
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> b[i][j];
        }
    }
    // 矩陣相乘並輸出
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            int now = 0;
            // 矩陣相乘的核心運算
            for (int k=0; k<n; k++) {
                now += a[i][k] * b[k][j];
            }
            // 輸出結果 C[i][j]，使用 %3d 確保格式對齊
            printf("%3d ", now);
        }
        // 每行結束後換行
        printf("\n");
    }
    return 0;
}
