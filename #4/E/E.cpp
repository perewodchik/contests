#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	freopen("digits2.in", "r", stdin);
	freopen("digits2.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int n;
	int current;
	int index;
	int max;
	long long input;
	vector<int> digits(8);
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		vector<bool> used(8);
		while(input)
		{
			current = input % 8;
			if(!used[current])
			{
				digits[current]++;
				used[current] = true;
			}
			input /= 8;
		}
	}
	
	max = -1;
	for(int i = 0; i < 8; i++)
	{
		if(digits[i] > max)
			max = digits[i];
	}
	for(int i = 0; i < 8; i++)
	{
		if(digits[i] == max)
			cout << i << " ";
	}
	
	return 0;
}

