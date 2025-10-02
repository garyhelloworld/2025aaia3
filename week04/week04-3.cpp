// week 04-3.cpp
// LeetCode 學習計畫第7題 66. Plus One
// 1 2 3
//     4 最右邊開始 +1完成
// 4 3 2 1
//       2 最右邊開始 +1完成
// 9 4 9
//     0 有進位 不可return 繼續做
//   5 最右邊+1完成
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(); // 陣列的大小
        for(int i = n-1; i>=0; i--){ // 倒過來的迴圈
            if(digits[i]==9){ // 要進位
                digits[i] = 0; // 設成0 繼續做 不結束
            } else { // 不用進位 ++結束
                digits[i]++; // 簡單+1
                return digits; // 把全部的陣列 當答案 return
            }
        }
        digits.insert(digits.begin(), 1); // 最左邊要插入 1
        return digits;
    }
};
