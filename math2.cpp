#include <iostream>
#include <stdlib.h>
using namespace std;

//¼û¹Ù²ÀÁú 6
/*int temp[100001];

int GCD(int num1, int num2)
{
	if (num1 % num2 == 0)	return num2;
	else
		return GCD(num2, num1 % num2);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;	//µ¿»ý ¼ö
	cin >> N;
	int result = 0;

	int S;	//³ªÀÇ À§Ä¡
	cin >> S;

	int X;
	for (int i = 0; i < N; i++) {
		cin >> X;
		X = abs(S - X);
		temp[i] = X;
	}

	result = temp[0];
	for (int i = 1; i < N; i++) {
		result = GCD(temp[0], temp[i]);
	}

	cout << result;
}*/

bool Prime(int num)
{
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0)	return false;
	}
	return true;
}

//°ñµå¹ÙÈåÀÇ ÃßÃø
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	bool suc = false;
	int t = 1;

	while (t) {
		cin >> t;
		if (t == 0)	break;
		for (int i = 1; i < t / 2; i++) {
			a = 2 * i + 1;	//È¦¼ö
			b = t - a;
			if (Prime(a) and Prime(b)) {
				cout << t << " = " << a << " + " << b << '\n';
				suc = true;
				break;
			}
		}
		if (!suc)
			cout << "Goldbach's conjecture is wrong.";
	}

	return 0;
}