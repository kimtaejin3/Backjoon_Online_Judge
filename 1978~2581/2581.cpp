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
	int max, min;
	int count = 0;
	int nCount = 0;
	int result = 0, minNumber;

	cin >> min;
	cin >> max;

	for (int i = min; i <= max; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)count++;
		}
		if (count == 2)
		{
			nCount++;
			result += i;

			if (nCount == 1)
				minNumber = i;
		}
		count = 0;
	}

	if (nCount == 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << result << endl << minNumber << endl;
	}
	return 0;
}

