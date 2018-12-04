#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	freopen("matrix3.in", "r", stdin);
	freopen("matrix3.out", "w", stdout);
	ios::sync_with_stdio(0);
	int n,m,input,min,max;
	min = 1000000001;
	max = -1000000001;
	cin >> n >> m;
	
	vector< vector<int> > mat(n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> input;
			mat[i].push_back(input);
			if(input < min)
				min = input;
			if(input > max)
				max = input;
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			for(int i1 = 0; i1 < n; i1++)
			{
				for(int j1 = 0; j1 < m; j1++)
				{
					if(mat[i][j] == mat[i1][j1] && !((i==i1) && (j==j1)))
					{
						cout << max;
						return 0;
					}
				}
			}
		}
	}
	cout << min;
	return 0;
}
