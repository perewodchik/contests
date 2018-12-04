#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;



int main()
{
	freopen("seq.in", "r", stdin);
	freopen("seq.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int n, input, max;
	cin >> n;
	vector<int> seq;
	max = 0;
	
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		seq.push_back(input);
	}
	
	
	for(int i = 0; i < n; i++)
	{
		if(seq[i] > max && seq[i] % 2 == 1)
			max = seq[i];
	}
	
	cout << max;
	
	return 0;
}


