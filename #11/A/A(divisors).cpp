#include <iostream>
int N,a[110];
long long num=1;

int gcd(int a, int b)
{
	return (b == 0)?a:gcd(b, a%b);
}

void input()
{
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
		scanf("%d", &a[i]);
}

long long lcm(int a, int b)
{
	return (long long)a*b/gcd(a,b);
}

void handle()
{
	
	for(int i = 0; i < N; i++)
	{
		num = lcm(num, a[i]);
	}
}

void output()
{
	printf("%llu", num);
}


int main()
{
	freopen("divisors.in", "r", stdin);
	freopen("divisors.out", "w", stdout);
	input();
	handle();
	output();
}
