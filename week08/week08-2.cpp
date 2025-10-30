// week 08-2.cpp Leetcode 學習計畫 Matrix矩陣第4題
// 73. Set Matrix Zeroes
// 要小心 不能一邊讀 一邊設成0 要兩階段
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // 第1階段 先讀完 記下全部的
        int M = matrix.size(), N = matrix[0].size(); // 左手M 右手 N
        vector<int> markI(M, 0),
            markJ(N, 0); // 宣告 C++的陣列 長度分為M N 迴圈都設為0
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (matrix[i][j] == 0) {
                    markI[i] = 1; // 標記一下 i的整橫條 等一下都要清為0
                    markJ[j] = 1; // 標記一下 J的整直條 等一下都要清為0
                }
            }
        }
        // 第2階段 照著markI marlJ的標記 把整條路清為0
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (markI[i] == 1 || markJ[j] == 1)
                    matrix[i][j] = 0;
            } // 如果有標記  再把它對應的項變成0
        }
    }
};
