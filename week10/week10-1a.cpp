// week10-1a.cpp 第一次用 for 迴圈 第二次用數學
// 1523. Count Odd Numbers in an Interval Range
// 從  low ...high 裡面有幾個奇數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for(int i = low; i <= high; i++){
            if(i%2 == 1) ans++; // 奇數
        }
        return ans;

    }
};
