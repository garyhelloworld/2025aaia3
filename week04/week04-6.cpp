/// week04-6.cpp
/// 練習各種 伸縮自如的陣列 <vector> a 的初始化
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> a;      /// 沒有任何初始化的參數 長度是0
    cout << endl << "陣列a的長度是" << a.size() << endl;

    vector <int> b(3);   /// 有個參數 對應長度是3
    cout << endl << "陣列b的長度是" << b.size() << endl;
    for(int i = 0; i<b.size(); i++) cout << b[i] << " ";

    vector <int> c(3, 88); /// 長度是3 裡面都塞88
    cout << endl << "陣列c的長度是" << c.size() << endl;
    for(int i = 0; i<c.size(); i++) cout << c[i] << " ";

    int d[10] = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0}; /// C語言的陣列
    vector <int> f(d, d+4); /// 用C的陣列的 某個範圍 來初始化 4格
    cout << endl << "陣列f的長度是" << f.size() << endl;
    for(int i = 0; i<f.size(); i++) cout << f[i] << " ";

    vector <int> g(d, d+10); /// 用C語言陣列 的某個範圍 來初始化10格
    cout << endl << "陣列g的長度是" << g.size() << endl;
    for(int i = 0; i<g.size(); i++) cout << g[i] << " ";
}
