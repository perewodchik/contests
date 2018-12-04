#include <iostream>
using namespace std;

int gas[1010];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	int n, W,planet=0;
	cin >> n >> W;
	for(int i = 1; i <= n; i++)
	{
		cin >> gas[i];
	}
	
	for(int i = 1; i <= n; i++)
	{
		W -= gas[i];
		if(W < 0)
			break;
		else	
			planet++;
	}
	cout << planet;
	
	return 0;
}
