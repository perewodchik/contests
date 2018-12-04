#include <iostream>
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	long long int n,a, sum;
	cin >> n;
	sum = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a;
		sum = sum + a;
	}
	cout << sum;
}
