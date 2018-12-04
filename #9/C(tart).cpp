#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int p[30][30];
bool used[30];

int main()
{
	freopen("tart.in", "r", stdin);
	freopen("tart.out", "w", stdout);
	int N, min_comb=-200000010, sum=0;
	bool checked = false;
	cin >> N;
	for(int i = 1; i <= N; i++)
		for(int j = 1; j <= N; j++)
			cin >> p[i][j];
	for(int i = 1; i < N; i++)
	{
		for(int j = i+1; j <= N; j++)
		{
			min_comb = max(min_comb, p[i][j]);
			if(p[i][j] >= 0 && !used[j])
			{
				used[j] = true;
				checked = true;
				sum+= p[i][j]; 
			}
		}
	}
	
	if(sum>=0 && checked)
		cout << sum;
	else
		cout << min_comb;
	
}



