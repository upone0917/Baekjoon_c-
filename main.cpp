#include <iostream>
#include <stack>
#include <string>
using namespace std;

//�ܾ� ������
/*
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
}*/

//��ȣ
/*
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;

	while (t--) {
		string S;
		cin >> S;
		//stack<char> stk;
		int count = 0;	//������ ũ��

		for (int i = 0; i < S.length(); i++) {
			if (S[i] == '(')
				count+=1;
			if (S[i] == ')')
				count-=1;
			if (count < 0)
				cout << "No";
		}
		if (count == 0)
			cout << "Yes";	//��� �ִ� ������ ��� ¦�� �´� ��ȣ
		if (count > 0)	//���� ��ȣ�� ������ ���
			cout << "No";
	}
	return 0;
}*/

//���� ����
//���ÿ� push�Ǵ� ������ ��������
//pop�Ǵ� ������� ������ ��������� ������, A�� ù ������ ������� �����
int main()
{
	stack<int> stk;
	string s;
	int N;	cin >> N;
	int m = 0;	//���ÿ� �� ������ ��

	while (N--) {
		int x;
		cin >> x;
		if (x > m) {	//���� ���� m���� ũ�� m-1���� ��� push
			while (x > m) {
				stk.push(++m);
				s += '+';
			}
			stk.pop();
			s += '-';
		}
		
		else {
			bool found = false;
			if (!stk.empty()) {
				int top = stk.top();
				stk.pop();
				s += '-';
				if (x == top)
					found = true;
			}
			if (!found) {
				cout << "NO" << '\n';
				return 0;
			}
		}
	}

	for (auto x : s)
		cout << x << '\n';
}