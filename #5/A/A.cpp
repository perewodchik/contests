#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	freopen("number.in", "r", stdin);
	freopen("number.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int input;
	map<int,int> values;
	int max_frequency = 0;
	int max =  -2147483648;
	while(cin >> input)
	{
		values[input]++;
		if(max_frequency < values[input])
		{
			max = input;
			max_frequency = values[input];
		}
		if(max_frequency == values[input] && max < input)
			max = input;
	}
	cout << max;
}

