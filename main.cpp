//단어 뒤집기
#include <iostream>
//#include <stack>
#include <string>
using namespace std;

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
}