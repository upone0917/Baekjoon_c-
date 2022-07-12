#include <iostream>
#include <cmath>
using namespace std;

//소수 개수 구하기
int main()
{
	int N;
	int count = 0;	//약수의 개수
	int temp = 0;	//입력받은 수
	int result = 0;	//소수의 개수
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		for (int div = 1; div <= temp; div++) {
			if (temp % div == 0)
				count++;	//약수 개수
		}
		if (count == 2)	//약수의 개수가 2개이면 소수
			result++;
		count = 0;
	}
	cout << result;
	return 0;
}

//소수 구하기
int main()
{
	int N;	int M;
	cin >> N >> M;

	int prime[101];
	for (int i = 2; i <= M; i++)
		prime[i] = i;	//숫자 넣기

	for (int i = 2; i * i <= M ; i++) {
		if (prime[i] == 0)
			continue;
		//2의 배수, 3의 배수 순으로 삭제
		for (int j = i * i; j <= M ; j += i)
			prime[j] = 0;
	}

	for (int i = N; i <= M ; i++) {
		if (prime[i] != 0)
			cout << prime[i] << '\n';
	}

	return 0;
}