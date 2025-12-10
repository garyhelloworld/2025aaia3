// week07-4.cpp
// LeetCode 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        // 重複四次指令，如果能回到原點或方向朝北以外，則說明最終會被限制在一個圓周內
        instructions = instructions + instructions + instructions + instructions; // 走4次

        int x = 0, y = 0; // x座標, y座標, 一開始要在原本的位置 原點 (0, 0)
        int d = 0; // d:方向 direction 0:北 1:東 2:南 3:西

        // 模擬 2D 移動
        // dx[d] 和 dy[d] 分別表示在方向 d 時 x 和 y 坐標的變化量
        int dx[4] = {0, 1, 0, -1}; // d=0(北): (0, 1) -> x+0, y+1; d=1(東): (1, 0) -> x+1, y+0; ...
        int dy[4] = {1, 0, -1, 0}; // 這兩行, 是「地圖2D模擬」的精華, 決定前進多少

        for (char c : instructions) { // 依照字母的指令, 做一個動作
            if (c=='G') { // 前進1格, 配合 dx[d] dy[d] 前進
                x += dx[d];
                y += dy[d];
            }
            else if (c=='R') { // 右轉
                d = (d + 1) % 4; // 右轉 d+1 取 4 的餘數
            }
            else if (c=='L') { // 左轉
                d = (d + 3) % 4; // 左轉 d+3 取 4 的餘數 (相當於 d-1 再 +4)
            }
        }

        // 檢查最終狀態：
        // 1. 回到原點 (x=0, y=0) -> 必定有界
        // 2. 方向不是朝北 (d != 0) -> 重複執行後必定有界 (因為會在四個循環內轉回)
        if (x == 0 && y == 0) return true;
        else if (d != 0) return true;
        else return false;
    }
};
