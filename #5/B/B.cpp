#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;


int main()
{
	freopen("subseq.in", "r", stdin);
	freopen("subseq.out", "w", stdout);
	ios::sync_with_stdio(0);
	int sequence = 0;
	int max_sequence = 0;
	int input;
	int previous;
	cin >> input;
	previous = input;
	sequence++;
	
	while(cin >> input)
	{
		if(previous < input)
			sequence++;
		else
		{
			if(max_sequence < sequence)
				max_sequence = sequence;
			sequence = 1;
		}
		previous = input;
	}
	if(max_sequence < sequence)
		max_sequence = sequence;
	cout << max_sequence;
}

