#include <iostream>
#include <stack>
#include <string>
using namespace std;

//단어 뒤집기
/*
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;	
	cin >> t;
	cin.ignore();	//첫 번째 입력에서 개행문자가 없어도 무시
	
	while (t--) {
		stack<char> S;
		string str;
		getline(cin, str);	//string으로 입력 받기
		str += '\n';
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ' ' || str[i] == '\n') {	//빈칸이거나 문자열의 끝이면
				while (!S.empty()) {
					cout << S.top();	//스택을 비우기
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

//괄호
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
		int count = 0;	//스택의 크기

		for (int i = 0; i < S.length(); i++) {
			if (S[i] == '(')
				count+=1;
			if (S[i] == ')')
				count-=1;
			if (count < 0)
				cout << "No";
		}
		if (count == 0)
			cout << "Yes";	//비어 있는 스택인 경우 짝이 맞는 괄호
		if (count > 0)	//여는 괄호가 부족한 경우
			cout << "No";
	}
	return 0;
}*/

//스택 수열
//스택에 push되는 순서는 오름차순
//pop되는 순서대로 수열이 만들어지기 때문에, A의 첫 수부터 순서대로 만들기
int main()
{
	stack<int> stk;
	string s;
	int N;	cin >> N;
	int m = 0;	//스택에 들어간 마지막 수

	while (N--) {
		int x;
		cin >> x;
		if (x > m) {	//현재 수가 m보다 크면 m-1까지 계속 push
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