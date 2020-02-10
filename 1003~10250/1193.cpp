#include<iostream>

using namespace std;

int main(void)
{
	int numerator = 0;
	int denominator = 0;
	int inputNum;
	int cnt = 1;
	cin >> inputNum;

	while (cnt < inputNum)
	{
		inputNum = inputNum - cnt;
		cnt++;
	}

	if (cnt % 2 == 0)
	{
		for (int i = cnt; i > 0; i--)
		{
			denominator = i;
			numerator++;

			inputNum--;
			if (inputNum == 0)
			{
				break;
			}
		}
	}

	else
	{
		for (int i = cnt; i > 0; i--)
		{
			numerator = i;
			denominator++;

			inputNum--;
			if (inputNum = 0)
			{
				break;
			}
		}
	}
	cout << numerator << "/" << denominator;


	return 0;
}