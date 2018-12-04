#include <iostream>
using namespace std;

int main()
{
	freopen("list.in", "r", stdin);
	freopen("list.out", "w", stdout);
	ios::sync_with_stdio(0);
	
	int N,input, previous,result;
	cin >> N;
	previous = -1;
	result = 0;
	for(int i = 0; i < N; i++)
	{
		cin >> input;
		if(input != previous+1)
			result++;
		previous = input;
	}
	
	cout << result;
	
	return 0;
}
