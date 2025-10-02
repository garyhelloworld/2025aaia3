// week04-2.cpp
// LeetCode �ǲ߭p�e��10�D 896. Monotonic Array
// �}�C�ܳ�� �u���W�[or�u����� ���i �S�W�S��
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up  = 0, down = 0; // up�W�[ down���
        for(int i = 1; i < nums.size(); i++){ // �ǭǤ��
            if( nums[i-1] < nums[i]) up = 1; // �W�[
            if( nums[i-1] > nums[i] ) down = 1; //���
        }
        if(up ==1 && down ==1 ) return false;
        return true; //�S�����ѴN���\
    }

};
