// week 03-4.cpp
// LeetCode �D���D 120. Triangle ���̤W�����U�����̤p��
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // triangle[i][j]��i�骺��j�j��
        int n  = triangle.size();
        //�q�U���W�d �̤U������N-1�h �S���D �N�O�������̤p�� �ҥHN-2���W��s
        for(int i = n-2; i>=0; i--){ // �˹L�Ӫ��j�� �qN-2���W
            for(int j = 0; j<=i; j++){ // �q����k ��i�h ��0...1�Ӽ� ���n��s
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
                //�C�ӤH �n�ݥ��U����ӿ�� ���U�� �U�谾�k ��̤p�����@��
            }
        }
        return triangle[0][0];
    }
};
