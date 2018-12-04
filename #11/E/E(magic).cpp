#include <iostream>
int a[110][110];
int sum=0, N;

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

bool is_magic()
{
	for(int i = 0; i < N; i++)
		sum += a[0][i]; //сумма первой строки
	
	int possible_sum;	
	//строки
	for(int i = 0; i < N; i++)
	{
		possible_sum = 0;
		for(int j = 0; j < N; j++)
		{
			possible_sum += a[i][j];
		}
		if(sum != possible_sum)
			return false;
	}
	
	for(int i = 0; i < N; i++)
	{
		possible_sum = 0;
		for(int j = 0; j < N; j++)
		{
			possible_sum += a[j][i];
		}
		if(sum != possible_sum)
			return false;
	}
	
	//диагонали
	possible_sum = 0;
	for(int i = 0; i < N; i++)
	{
		possible_sum += a[i][i];
	}
	
	if(sum != possible_sum)
		return false;
	
	possible_sum = 0;
	for(int i = 0; i < N; i++)
	{
		possible_sum += a[i][N-i-1];
	}
	
	if(sum != possible_sum)
		return false;
		
	return true;
}


int main()
{
	freopen("magic.in", "r", stdin);
	freopen("magic.out", "w", stdout);
	input();
	if(is_magic())
		printf("yes");
	else
		printf("no");
		
}

