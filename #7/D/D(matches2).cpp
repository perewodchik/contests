#include <iostream>
using namespace std;

int main()
{
	freopen("matches2.in", "r", stdin);
	freopen("matches2.out", "w", stdout);
	ios::sync_with_stdio(0);
	int count,c;
	long long N;
	cin >> N;
	
	count = 0;
	
	if(N < 10000)
		for(int a = 1; a < N; a++)
		{
			for(int b = a; b < N-b; b++)
			{
				
				c = N - b - a;
				if((c > 0) && a <= b && b <= c)
				{
					if((a < (b+c)) && (b < (a+c)) && (c < (a+b)))
						count++;
				}
			}
		}
	else
	{
		if(N % 2 == 0)
			count = N*N/48;
		else
			count = (N+3)*(N+3)/48;
	}	
	cout << count;
	return 0;
}
