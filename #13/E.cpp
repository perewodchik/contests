#include <iostream>
#include <string>
using namespace std;

int N, T[110], K, M, penalty, current, best, test;
bool accepted;

int main()
{
	freopen("counting.in", "r", stdin);
	freopen("counting.out", "w", stdout);
	scanf("%d", &N);
	for(int i = 0 ; i < N; i++)
	{
		scanf("%d", &T[i]);
	}
	scanf("%d%d", &K, &M);
	
	
	for(int i = 0; i < M; i++)
	{
		current = 0;
		accepted = true;
		
		for(int j = 0; j < N; j++)
		{
			scanf("%d", &test);
			if(test == 1)
				current += T[j];
			else
				accepted = false;
		}
		current -= penalty;
		if(accepted)
		{
			current += K;
		}
		else
		{
			
			penalty += 2;
		}
		
		if(current > best) best = current;
		
		
	}
	
	printf("%d", best); 
	return 0;
}
