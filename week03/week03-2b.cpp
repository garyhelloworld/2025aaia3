// week 03-2b.cpp �G�X�@
// LeetCode �ǲ߭p�e�ĤK�D1822. Sign of the Product of an Array
// ��}�C���_�ӡA�ݬO���� �t�� �٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;//�]��0�ӥ���Ƴ��|�ܦ�0
        for(int i = 0; i<nums.size(); i++){ //�ݦ��X�Ӽ� �j��]�X��
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
            // ans'=nums[i];//
        } //�Ʀr�V���V�j 1000�ӼƦr ����@�b �N�z���F �ҥH�{�����F
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
