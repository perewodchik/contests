#include <iostream>

int a[110][110], N, offset=0, c=0;

void input()
{
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}

int main()
{
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	input();
	
	do
	{
		for(int k = offset; k < N - offset; k++)
		{
			if(c > N*N)
				break;
			c++;
			printf("%d ", a[offset][k]);
		}
		
		for(int m = offset+1; m < N - offset; m++)
		{
			if(c > N*N)
				break;
			c++;
			printf("%d ", a[m][N - offset - 1]);
		}
		
		for(int q = N - offset - 2; q >= offset; q--)
		{
			if(c > N*N)
				break;
			c++;
			printf("%d ", a[N-offset-1][q]);
		}
		
		for(int l = N - offset - 2; l > offset ; l--)
		{
			if(c > N*N)
				break;
			c++;
			printf("%d ", a[l][offset]);
		}
		offset++;
		
	} while (c < N*N);
}
