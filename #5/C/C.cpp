#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_ascending(long long n)
{
	int p = 10;
	int c;
	while(n)
	{
		c = n%10;
		if(c > p)
			return false;
		p = c;
		n /= 10;
	}
	return true;
}

bool is_descending(long long n)
{
	
	int p = -1;
	int c;
	while(n)
	{
		c = n%10;
		if(c < p)
			return false;
		p = c;
		n /= 10;
	}
	return true;
}

int main()
{
	freopen("mono.in", "r", stdin);
	freopen("mono.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long number;
	long long input;
	long long max = -1;
	
	while(cin >> input)
	{
		if(is_ascending(input) || is_descending(input))
		{
			if(max < input)
				max = input;
		}
	}
	
	if(max != -1)
		cout << max;
	else
		cout << 0;

}

