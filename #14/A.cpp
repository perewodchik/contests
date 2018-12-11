#include <iostream>
#define MAX_LIMIT 1000000000000000 //15
using namespace std;

long long N, value=0;

long long f(long long x)
{
	if(x%2 == 0)
		x/=2;
	else
		x=3*(x-1)+4;
		
	return x;
}
int main()
{
	freopen("life.in", "r", stdin);
	freopen("life.out", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	scanf("%d", &N);
	
	while(N > 1)
	{
		N = f(N);
		value++;
	}
	printf("%d", value);
}
