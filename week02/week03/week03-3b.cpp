// week03-3b.cpp二合一的一種方法 把不是0的找出來
// LeetCode 學習計畫 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; // 直接移動nums[k] = nums[i] 再k++
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != 0) nums[k++] = nums[i];
        }
        for(int i = k; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};
