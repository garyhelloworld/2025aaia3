// week02-3.cpp Part 2 �ϥ�c++2011�~�s���r��stoi�\��
// �bcodeblocks �̡A �����}�� setting - compiler... ��c++11����
// SOIT106_ADVANCE_001 Using C++
#include <iostream> //cin cout ��J��� �L�X���
#include <string> // string �r��\��
using namespace std; // �ϥ�"�R�W�Ŷ�" �з�std
int main(){
	string a; // �ŧi�r��
	cin >> a; // Ū�J�r��
	string ans; //�ŧi�r�� ans �񵪮ץ�

	int n = a.length(); //�r�� a ������
	for(int i = n-1; i >= 0; i--){ // �˹L�Ӫ��j��
		ans += a[i]; // �b�j��� �A��a[i]��� ans ���᭱
	}
	cout << a << '+' << stoi(ans) <<'='
		 << stoi(a) + stoi(ans) << endl;
} // stoi() is string to int ��"�r��" �ܦ����
