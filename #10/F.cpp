#include <iostream>
using namespace std;

int winners[1000010];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	int n,b1,b2,b3,b4,b5,sum,best=0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> b1 >> b2 >> b3 >> b4 >> b5;
		sum = b1+b2+b3+b4+b5;
		if(sum > 50)
		{
			if(sum == best)
			{
				winners[0]++;
				winners[i] = sum;
			}
			if(sum > best)
			{
				winners[0] = 1;
				winners[i] = sum;
				best = sum;
			}
		}
	}
	
	if(best <= 60)
	{
		cout << 3;
		return 0;
	}
	if(best > 60 && best <= 80)
	{
		cout << 4;
		return 0;
	}
	if(best > 80 && best <= 100)
	{
		cout << 5;
	}
	
	return 0;
}
