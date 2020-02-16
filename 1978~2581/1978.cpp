#include<iostream>

using namespace std;

bool primeNumber(int num)
{
	int i;
	if (num == 2)return true;
	if (num == 1)return false;
	
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)break;
	}
	if (i == num)return true;
	return false;
}

int main(void)
{
	int n,num,sum=0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (primeNumber(num))sum++;
	}

	cout << sum;
	
	return 0;
}