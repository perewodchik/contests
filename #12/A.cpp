#include <iostream>
using namespace std;
typedef int MATRIX[25][25];

int best = -10000010;
MATRIX pie;
int p[25];
int s[25];
void search(int N, int i);
void input(int &N, MATRIX a);

int main()
{
	freopen("salad.in", "r", stdin);
	freopen("salad.out", "w", stdout);
	int N;
	input(N, pie);
	search(N, 1);
	cout << best;
}

void input(int &N, MATRIX a)
{
	cin >> N;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			cin >> a[i][j];
}

void search(int N, int i)
{
	if(i > 2)
	{
		int value = 0;
		for(int j = 1; j < i-1; j++)
		{
			value += pie[ p[j]-1 ][ p[j+1]-1 ];
			best = max(best, value);
		}
	}
	if(i > N)
		return;	
	for(int j = 1; j <= N; j++)
	{
		if(s[j] == 0)
		{
			s[j] = 1;
			p[i] = j;
			search(N, i+1);
			s[j] = 0;	
		}	
	}	
}

/*
if(i > N) return;
	for(int j = 1; j <= N; j++)
	{
		if(s[j] == 0)
		{
			s[j] = 1;
			p[i] = j;
			if(i > 1) search(N, i+1, v+pie[ p[i-1] ][j]);
			else search(N, i+1, 0);
			s[j] = 0;
		}
*/



