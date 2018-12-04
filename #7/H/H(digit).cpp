#include <iostream>
using namespace std;



int main()
{
	freopen("digit.in", "r", stdin);
	freopen("digit.out", "w", stdout);
	ios::sync_with_stdio(0);
	
	int current, K,n;
	cin >> K;
	current = 1;
	n = 0;
	while(current + n >= current || current+n > K)
	{
		current = current + n;
		if(current == K)
		{
			cout << 1;
			return 0;
		}
		n++;
	}
	cout << 0;
	return 0;
}
