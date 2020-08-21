#include <bits/stdc++.h>

using namespace std;

int main()
{

	int best = 0;
	int sum = 0;
	int n = 8;
	int arr[n] = {-1, 2, 4, -3, 5, 2, -5, 2};

	for (int k = 0; k < n; k++)
	{
		cout << "best: " << best << endl;
		cout << "sum: " << sum << endl;
		cout << "Current Element: " << arr[k] << ",	Sum + Current Element: " << sum + arr[k] << endl;
		sum = max(arr[k], sum + arr[k]);
		best = max(best, sum);

		cout << "bestNew: " << best << endl;
		cout << "sumNew: " << sum << endl;
		cout << "---------------------" << endl;
	}

	cout << "bestFinalNew: " << best << endl;
}
