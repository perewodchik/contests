#include <iostream>
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	long long int n,a;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a;
		cout << a << " ";
	}
}
