#include <iostream>

using namespace std;

int main()
{
	freopen("digits.in", "r", stdin);
	freopen("digits.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	
	long long n;
	int max,min,current;
	min = 10;
	max = -1;
	
	cin >> n;
	while(n)
	{
		current = n % 10;
		if(current < min)
			min = current;
		if(current > max)
			max = current;
			
		n = n / 10;
	}
	
	cout << min << " " << max;
}
