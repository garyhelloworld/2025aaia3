// week 04-3.cpp
// LeetCode �ǲ߭p�e��7�D 66. Plus One
// 1 2 3
//     4 �̥k��}�l +1����
// 4 3 2 1
//       2 �̥k��}�l +1����
// 9 4 9
//     0 ���i�� ���ireturn �~��
//   5 �̥k��+1����
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(); // �}�C���j�p
        for(int i = n-1; i>=0; i--){ // �˹L�Ӫ��j��
            if(digits[i]==9){ // �n�i��
                digits[i] = 0; // �]��0 �~�� ������
            } else { // ���ζi�� ++����
                digits[i]++; // ²��+1
                return digits; // ��������}�C ���� return
            }
        }
        digits.insert(digits.begin(), 1); // �̥���n���J 1
        return digits;
    }
};
