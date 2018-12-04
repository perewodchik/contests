#include <iostream>
using namespace std;

int first_three_sum(int n)
{
	int b[6];
	for(int i = 0; i < 6; i++)
	{
		b[i] = n % 10;
		n /= 10;
	}
	
	return b[3]+b[4]+b[5];
}

int last_three_sum(int n)
{
	int b[6];
	for(int i = 0; i < 6; i++)
	{
		b[i] = n % 10;
		n /= 10;
	}
	
	return b[0]+b[1]+b[2];
}


int main()
{
	//freopen("klucky.in", "r", stdin);
	//freopen("klucky.out", "w", stdout);
	ios::sync_with_stdio(0);
	
	int K,count;
	cin >> K;
	
	count = 0;
	for(int i = 0; i < 1000000; i++)
	{
		if(first_three_sum(i) == K*last_three_sum(i))
			count++;
	}
	
	cout << count;
	
	return 0;
}
