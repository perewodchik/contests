#include <iostream>
#include <algorithm>


using namespace std;

int a[1100], N, repeat, best=0;

void input()
{
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
}

int main()
{
	freopen("chains.in", "r", stdin);
	freopen("chains.out", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	input();
	
	for(int i = 0; i < N-1; i++)
	{
		repeat = 1;
		for(int j = i+1; j < N; j++)
		{
			if(a[i] == a[j])
			{
				repeat++;
			}
		}
		best = max(best, repeat);
	}
	printf("%d", best);
}
