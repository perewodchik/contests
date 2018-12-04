#include <iostream>
using namespace std;

int b[1000];
int e[10000];

int main()
{
	int N,sum;
	cin >> N;
	for(int i = 0; i < N; i++)
		cin >> b[i] >> e[i];
	for(int i = N-1; i > 0; i--)
	{
		for(int j = 0; j < i; j++)
		{
			if(b[j] > b[j+1])
			{
				swap(b[j],b[j+1]);
				swap(e[j],e[j+1]);
			}
		}
	}
	sum = 0;
	for(int i = 0; i < N-1; i++)
	{
		if(e[i] > b[i+1])
			sum += b[i+1] - b[i];
	}
	cout << sum;
}
