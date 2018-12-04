#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	freopen("matrix1.in", "r", stdin);
	freopen("matrix1.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,input,min,max;
	cin >> n >> m;
	min = 1000000001;
	max = -1000000001;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> input;
			if(min > input)
				min = input;
			if(max < input)
				max = input;
		}
	}
	
	cout << max << " " << min;
}
