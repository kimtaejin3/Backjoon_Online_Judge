#include<iostream>

using namespace std;

int room[100][100];
// �迭 ���� �ʰ� Ǭ Ǯ�̿� �ð��� �����.

int main(void)
{
	int T;
	int W, H, N;
	int sum = 100;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;
		for (int j = 1; j <= H; j++)
		{
			sum = sum * j + 1;
			for (int k = 1; k <= W; k++)
			{
				room[j][k] = sum++;
			}
			sum = 100;
		}
		if (N % H == 0) {
			cout << room[H][N/H]<<endl;
		}
		else {
			cout << room[N % H][N / H + 1] << endl;
		}
	}
	
	return 0;
}

/*



*/