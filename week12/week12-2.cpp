// week12-2.cpp
// LeetCode 976. Largest Perimeter Triangle
// 找可構成三角形的三邊長 加起來最大 兩邊和大於第三邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // for(int i = nums.size()-1; i>=0; i--){
        //    cout << nums[i] << " ";

        // }
        for (int i = nums.size() - 1; i >= 2; i--) {
            // 取出nums[i] vs. nums[i-1] nums[i-2]
            if (nums[i] < nums[i - 1] + nums[i - 2]) {
                return nums[i] + nums[i - 1] + nums[i - 2];
            } // 找到最大的 合法 三角形 把三邊加起來
        }
        return 0;
    }
};
