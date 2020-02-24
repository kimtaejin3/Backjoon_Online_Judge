#include<iostream>

using namespace std;

int main(void)
{
	int N,sum=0,f,i;
	cin >> N;

	for (i = 1; i < N; i++)
	{
		sum = 0;
		sum += i;
		f = i;
		while (f) {
			sum += f % 10;
			f /= 10;
		}
		if (sum == N) { break; }
	}

	if (i == N) {
		cout << "0";
	}
	else {
		cout << i << endl;
	}

	return 0;
}