#include <iostream>
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(0);
	long long x,y,m;
	
	cin >> x >> y;
	
	m = x+y;
	m = max(m, x*y);
	m = max(m, x-y);
	
	cout << m;
	
	return 0;
}
