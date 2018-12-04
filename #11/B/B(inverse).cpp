#include <iostream>
int N, inverse[1010], perm[1010];

void input()
{
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
		scanf("%d", &inverse[i]);
}

void handle()
{
	int curr = 1,  j;
	for(int m = 0; m < N; m++)
	{
		j = 0;
		for(int i = 0; i < N; i++)
		{
			if(perm[i] == 0)
			{
				if(j == inverse[m])
				{
					perm[i] = curr;
					break;
				}
				else j++;
			}
		}
		curr++;
	}
}

void output()
{
	for(int i = 0; i < N; i++)
		printf("%d ", perm[i]);
}

int main()
{
	freopen("inverse.in", "r", stdin);
	freopen("inverse.out", "w", stdout);
	input();
	handle();
	output();
}
