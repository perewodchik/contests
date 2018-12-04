#include <iostream>
using namespace std;

int x[500000];

int poly(int x1, int x2)
{
	return (x2*x2 + 10 - 2*x1*x2 + x1*x1);
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(0);
	int N, max1=0,max2=0, min1=40000, m=0;
	
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> x[i];
		if(max1 < x[i])
		{
			max1 = x[i];
			if(max1 > max2)
				swap(max1,max2);
		}
		
		if(x[i] < min1)
		{
			min1 = x[i];
		}
	}
	
	m = poly(max1,max2);
	m = max(m, poly(max2,min1));

			
	
	cout << m;
}
