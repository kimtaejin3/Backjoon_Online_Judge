#include<iostream>
#include<cmath>
using namespace std;


typedef long long ll;

int main(void)
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int start, end;
		cin >> start >> end;
	
		ll dist = end - start;

		ll jump = 1;

		for (;; jump++) {
			if (jump * jump > dist)
				break;
		}
		jump--;

		ll left = dist - (jump * jump);
		left = (ll)ceil((double)left / (double)jump);

		cout << jump * 2 - 1 + left << endl;

	}

	return 0;
}