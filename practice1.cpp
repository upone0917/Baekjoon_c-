#include <iostream>
#include <string>
#include <stack>
using namespace std;

/*
//�ܾ� ������2
void Print(stack<char> &s)
{
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string str;
	getline(cin, str);
	stack<char> stk;
	bool tag = false;

	for (char ch : str) {
		if (ch == '<') {
			Print(stk);
			tag = true;
			cout << ch;	
		}
		else if (ch == '>') {
			tag = false;
			cout << ch;
		}
		else if (tag) //�±� ���� �ؽ�Ʈ�� �״�� ���
			cout << ch;
		else {
			if (ch == ' ' || ch == '\n') {
				Print(stk);
				cout << ch;
			}
			else
				stk.push(ch);
		}
	}
	Print(stk);
	cout << '\n';
	return 0;
}*/

//��ū��
int main()
{
	int N;
	cin >> N;
	int arr[10];
	int ans[10];

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	stack<int> stk;
	for (int i = N - 1; i >= 0; i--) {
		//������ top�� ���� ���� �� ��
		while (!stk.empty() && stk.top() <= arr[i]) {
			stk.pop();	//���� ���� ������ ������ top���� Ŭ������ pop
		}
		if (stk.empty())
			ans[i] = -1;
		else
			ans[i] = stk.top();
		stk.push(arr[i]);
	}

	for (int i = 0; i < N; i++)
		cout << ans[i] << " ";
}