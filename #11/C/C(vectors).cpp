#include <iostream>
#include <vector>
#include <string>
using namespace std;
int N,M, index_1, index_2, best=100,difference;
vector<string> bits(1010);

void input()
{
	string bit;
	scanf("%d %d", &N, &M);
	for(int i = 0; i < N; i++)
	{
		cin >> bit;
		bits[i] = bit;
	}
}

void handle()
{
	for(int k = 0; k < N-1; k++)
	{
		for(int m = k+1; m < N; m++)
		{
			difference = 0;
			for(int q = 0; q < M; q++)
			{
				if(bits[k][q] != bits[m][q])
					difference++;
			}
			if(difference < best)
			{
				best = difference;
				index_1 = k+1;
				index_2 = m+1;
			}
		}
	}
}

void output()
{
	printf("%d %d", index_1, index_2);
}

int main()
{
	freopen("vectors.in", "r", stdin);
	freopen("vectors.out", "w", stdout);
	input();
	handle();
	output();
}
