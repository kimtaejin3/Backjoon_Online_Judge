#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main(void) {
	int N,F,i;
	int rel,result;

	cin >> N;
	cin >> F;

	rel = (N / 100) * 100;

	for (i = rel; i < rel+100; i++)
	{
		if (i % F == 0) {
			result = i % 100;
			break;
		}
	}
	
	if (result >= 0 && result < 10)
	{
		cout << "0";
	}
	cout << result << endl;
	
	
	return 0;
}