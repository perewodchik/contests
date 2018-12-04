#include <iostream>
int N;

void input()
{
	scanf("%d", &N);
}

bool diff_numerals(int a, int b)
{
	int s[10], x;
	for(int i = 0; i < 10; i++)
		s[i]= -1;
		
	while(a)
	{
		x = a % 10;
		if(s[x] != -1)
			return false;
		s[x] = 1;
		a/=10;
	}
	if(b/10000 == 0 && s[0] != -1)
		return false;
	while(b)
	{
		x = b % 10;
		if(s[x] != -1)
			return false;
		s[x] = 1;
		b/=10;
	}
	
	return true;
}

bool has_zero(int a)
{
	while(a)
	{
		if(a%10 == 0)
			return true;
		a/=10;
	}
	return false;
}

void handle()
{
	for(int k = 10000; k < 1000000; k++)
	{
		if(k % N == 0)
		{
			if(diff_numerals(k, k/N))
			{
				if((k/N)/10000 == 0)
				{
					if(has_zero(k/N))
						continue;
					printf("%d 0%d\n", k, k/N);
				}
				else 
					printf("%d %d\n", k, k/N);
			}
		}
	}
}

int main()
{
	freopen("numbers.in", "r", stdin);
	freopen("numbers.out", "w", stdout);
	input();
	handle();
}
