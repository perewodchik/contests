#include <iostream>
#include <vector>
using namespace std;



int main()
{
	freopen("matches.in", "r", stdin);
	freopen("matches.out", "w", stdout);
	ios::sync_with_stdio(0);
	
	int N,count,c;
	cin >> N;
	vector< vector<int> > used(N);
	count = 0;
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
	cout << count;
	
	return 0;
}
