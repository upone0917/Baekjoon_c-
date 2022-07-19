#include <iostream>
using namespace std;

//2*n 타일링
/*
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	
	int dp[1001];
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2 ; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2])%10007;
	}
	cout << dp[n];
	return 0;
}*/

int main()
{
	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;
		int dp[11];	//방법의 수
		
		dp[0] = 1;	dp[1] = 1; dp[2] = 2;
		for (int i = 3; i <= N; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		cout << dp[N] << '\n';
	}

	return 0;
}