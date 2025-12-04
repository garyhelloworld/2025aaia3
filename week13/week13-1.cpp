// week13-1.cpp 聖誕倒數寫程式 Advent of Code 2025 第一天第一題
// moodle 點擊 https://adventofcode.com/
// LeetCode 幫你把 #include 都寫好了
// 右下角stdin 可貼上你的程式 Input
int main() {
    char c; // 字母 對應方向 L左轉 R右轉
    int d; // 數字要動幾格
    int now = 50; // 一開始的密碼鎖 指向50
    int ans = 0; // 轉動時有幾次停在0的地方 通關密碼
    while (cin >> c >> d){ // 一直讀資料 讀字母 讀數字
        //if(c == 'L') cout << "往左轉" << d << "格\n";
        //if(c == 'R') cout << "往左轉" << d << "格\n";
        if(c == 'L') now = now - d;
        if(c == 'R') now = now + d;

        now = (now % 100 + 100) % 100; // 太大的 太小的 都限制在 0-99
        //cout << "現在的刻度是:" << now << "\n";
        if(now == 0) ans++; // 轉動時停在0的地方


    }
    cout << "答案是" << ans;
}
/*
input
L68
L30
R48
L5
R60
L55
L1
L99
R14
L82
*/
