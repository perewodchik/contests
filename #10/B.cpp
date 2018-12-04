#include <iostream>
using namespace std;

int gas[100010];
int zapravka[100010];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	int n, W,W_max,planet=0;
	cin >> n >> W_max;
	
	for(int i = 1; i < n; i++)
	{
		cin >> zapravka[i];
	}
	
	for(int i = 1; i <= n; i++)
	{
		cin >> gas[i];
	}
	
	W = W_max;
	for(int i = 1; i <= n; i++)
	{
		W -= gas[i];
		if(W < 0)
		{
			break;
		}
		else	
		{
			if( W + zapravka[i] < W_max)
				W += zapravka[i];
			else
				W = W_max;
				
			planet++;
		}
	}
	cout << planet;
	
	return 0;
}
