#include<iostream>

using namespace std;

int main(void)
{
	int n, m, sum = 0,max=0;
	cin >> n >> m;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (i != j && j != k && i != k) {
					sum = arr[i] + arr[j] + arr[k];
					if (sum <= m && sum > max) {
						max = sum;
					}
				}
			}
		}
	}

	cout << max;

	return 0;
}