#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;



int main()
{
	freopen("number2.in", "r", stdin);
	freopen("number2.out", "w", stdout);
	ios::sync_with_stdio(0);
	
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
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
		if(digit[i] < 10)
			cout << digit[i];
		else
			cout << alphabet[ digit[i]-10 ];
	
	return 0;
}


