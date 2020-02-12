#include<iostream>

using namespace std;

int main(void)
{
	int a[20];

	a[0] = 0;
	a[1] = 1;

	int n;
	cin >> n;

	if (n <= 1) {
		cout << a[n];
	}
	else {
		for (int i = 2; i <= n; i++) {
			a[i] = a[i - 1] + a[i - 2];
		}
		cout << a[n];
	}

	return 0;
}