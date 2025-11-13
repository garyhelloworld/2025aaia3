// week10-1b.cpp 第一次用 for 迴圈 第二次用數學
// 1523. Count Odd Numbers in an Interval Range
// 從  low ...high 裡面有幾個奇數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high - low) / 2;
        if(high % 2 == 1 || low % 2 ==1) ans++;
        return ans;

    }
};
