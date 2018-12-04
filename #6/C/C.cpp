#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;



bool comp(char a, char b)
{
	if(a == 0 || b == 0)
		return true;
	else
		return a < b;
}

int main()
{
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	vector< vector<int >> matrix(n);
	int input;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> input;
			matrix[i].push_back(input);
		}
	}
	sort(matrix.begin(),matrix.end());
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}


