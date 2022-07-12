#include <iostream>
#include <cmath>
using namespace std;

//�Ҽ� ���� ���ϱ�
int main()
{
	int N;
	int count = 0;	//����� ����
	int temp = 0;	//�Է¹��� ��
	int result = 0;	//�Ҽ��� ����
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		for (int div = 1; div <= temp; div++) {
			if (temp % div == 0)
				count++;	//��� ����
		}
		if (count == 2)	//����� ������ 2���̸� �Ҽ�
			result++;
		count = 0;
	}
	cout << result;
	return 0;
}

//�Ҽ� ���ϱ�
int main()
{
	int N;	int M;
	cin >> N >> M;

	int prime[101];
	for (int i = 2; i <= M; i++)
		prime[i] = i;	//���� �ֱ�

	for (int i = 2; i * i <= M ; i++) {
		if (prime[i] == 0)
			continue;
		//2�� ���, 3�� ��� ������ ����
		for (int j = i * i; j <= M ; j += i)
			prime[j] = 0;
	}

	for (int i = N; i <= M ; i++) {
		if (prime[i] != 0)
			cout << prime[i] << '\n';
	}

	return 0;
}