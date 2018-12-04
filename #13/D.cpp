#include <iostream>

bool check(int N)
{
	int c[10], result=0;
	for(int i = 0; i < 10; i++)
	{
		c[i] = 0;
	}
	while(N)
	{
		c[ N % 10]++;
		N /= 10;
	}
	for(int i = 0; i < 10; i++)
	{
		if(c[i]) result++;
	}
	if(result <= 2)
		return true;
	return false;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	freopen("numbers.in", "r", stdin);
	freopen("numbers.out", "w", stdout);
	int N, N1,N2, left=-100000,right=100000;
	bool found=false;
	scanf("%d", &N);
	N1 = N;
	while(!found)
	{
		if(check(N1))
		{
			right = N1;
			found = true;
		}
		N1++;
	}
	found = false;
	N2 = N;
	while(!found)
	{
		if(check(N2))
		{
			left = N2;
			found = true;
		}
		N2--;
	}
	
	if(N - left <= right - N)
		printf("%d", left);
	else
		printf("%d", right);
		
	return 0;
}
