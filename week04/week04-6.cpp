/// week04-6.cpp
/// �m�ߦU�� ���Y�ۦp���}�C <vector> a ����l��
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> a;      /// �S�������l�ƪ��Ѽ� ���׬O0
    cout << endl << "�}�Ca�����׬O" << a.size() << endl;

    vector <int> b(3);   /// ���ӰѼ� �������׬O3
    cout << endl << "�}�Cb�����׬O" << b.size() << endl;
    for(int i = 0; i<b.size(); i++) cout << b[i] << " ";

    vector <int> c(3, 88); /// ���׬O3 �̭�����88
    cout << endl << "�}�Cc�����׬O" << c.size() << endl;
    for(int i = 0; i<c.size(); i++) cout << c[i] << " ";

    int d[10] = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0}; /// C�y�����}�C
    vector <int> f(d, d+4); /// ��C���}�C�� �Y�ӽd�� �Ӫ�l�� 4��
    cout << endl << "�}�Cf�����׬O" << f.size() << endl;
    for(int i = 0; i<f.size(); i++) cout << f[i] << " ";

    vector <int> g(d, d+10); /// ��C�y���}�C ���Y�ӽd�� �Ӫ�l��10��
    cout << endl << "�}�Cg�����׬O" << g.size() << endl;
    for(int i = 0; i<g.size(); i++) cout << g[i] << " ";
}
