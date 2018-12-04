#include <iostream>
using namespace std;

int main()
{
	freopen("excavator.in", "r", stdin);
	freopen("excavator.out", "w", stdout);
	int H, K, N,bridge,broken=0;
	scanf("%d%d%d", &H, &K, &N);
	for(int i = 1; i <= N; i++)
	{
		scanf("%d", &bridge);
		if(H >= bridge)
		{
			broken++;
			if(broken-1 == K)
			{
				printf("%d", i);
				return 0;
			}
		}
	}

	printf("%d", 0);
	return 0;
}
