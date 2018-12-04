#include <iostream>
#include <algorithm>
int N,maximum,minimum=100000,sum,best, a[10100];
int main()
{
	freopen("team.in", "r", stdin);
	freopen("team.out", "w", stdout);
	scanf("%d", &N);
	for(int i = 0; i < N; i++) scanf("%d", &a[i]);
	std::sort(a,a+N);
	int weakest_player = 0;
	int strongest_player = 1;
	sum = a[0];
	best = sum;
	while(strongest_player < N)
	{
		if(a[strongest_player] <= a[weakest_player] + a[weakest_player+1])
		{
			sum += a[strongest_player];
			strongest_player++;
			best = std::max(best,sum);
		}
		else
		{
			sum -= a[weakest_player];
			weakest_player++;
		}	
	}
	printf("%d", best);
}
