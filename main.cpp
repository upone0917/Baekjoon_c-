//�ܾ� ������
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;	
	cin >> t;
	cin.ignore();	//ù ��° �Է¿��� ���๮�ڰ� ��� ����
	
	while (t--) {
		stack<char> S;
		string str;
		getline(cin, str);	//string���� �Է� �ޱ�
		str += '\n';
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ' ' || str[i] == '\n') {	//��ĭ�̰ų� ���ڿ��� ���̸�
				while (!S.empty()) {
					cout << S.top();	//������ ����
					S.pop();
				}
				cout << str[i];
			}
			else {
				S.push(str[i]);
			}
		}
	}
	return 0;
}