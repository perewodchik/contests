#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	freopen("sequence.in", "r", stdin);
	freopen("sequence.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	bool ascending = true;
	bool descending = true;
	long long sum = 0;
	int input;
	int previous;
	int min;
	int max;
	
	cin >> input;
	sum += input;
	previous = input;
	min = input;
	max = input;
	
	while(cin >> input)
	{
		if(previous <= input)
			descending = false;
		if(previous >= input)
			ascending = false;
		sum += input;
		previous = input;
		
		if(input < min)
			min = input;
			
		if(input > max)
			max = input;
	}
	
	if(ascending||descending||(sum < 0))
		cout << max;
	else
		cout << min;

}
