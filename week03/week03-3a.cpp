// week03-3a.cpp�G�X�@���@�ؤ�k �⤣�O0����X��
// LeetCode �ǲ߭p�e 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; // �Ψө񤣬O0����
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != 0) ans.push_back(nums[i]);
        } //�W���⤣�O0���� �Ȯɩ�bans�� ���@�U�A��^�h
        //�A��for�j���i�h
        for(int i = 0; i<nums.size(); i++){
            if(i < ans.size()) nums[i] = ans[i];
            else nums[i]=0;

        }

    }
};
