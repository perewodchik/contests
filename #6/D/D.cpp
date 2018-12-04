#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;



int main()
{
	freopen("number1.in", "r", stdin);
	freopen("number1.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	
	long long n;
	int pos;
	cin >> n >> pos;
	vector<int> digit;
	while(n)
	{
		digit.push_back( n % pos );
		n /= pos;
	}
	for(int i = digit.size()-1; i >=0; i--)
		cout << digit[i];
	
	return 0;
}


