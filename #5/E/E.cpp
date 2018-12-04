#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	freopen("matrix2.in", "r", stdin);
	freopen("matrix2.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,input,min,max;
	cin >> n >> m;
	
	int max_col = -1000000001;
	vector< vector<int> > mat(n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> input;
			mat[i].push_back(input);
		}
	}
	
	for(int j = 0; j < m; j++)
	{
		min = 1000000001;
		for(int i = 0; i < n; i++)
		{
			if(mat[i][j] < min)
				min = mat[i][j];
		}
		if(min > max_col)
			max_col = min;
	}
	
	
	cout << max_col;
}
