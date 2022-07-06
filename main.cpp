//단어 뒤집기
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
}