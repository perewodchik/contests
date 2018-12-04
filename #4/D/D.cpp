#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	freopen("palindrom.in", "r", stdin);
	freopen("palindrom.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	
	long long palindrom,current;
	int amount;
	
	amount = 0;
	string compare;
	string source;
	while(cin >> palindrom)
	{
		ostringstream ostr;
		ostr << palindrom;
		source = ostr.str();
		compare = source;
		reverse(compare.begin(), compare.end());
		if(source == compare)
			amount++;
		/*
		vector<int> digits;
		
		while(palindrom)
		{
			current = palindrom % 10;
			digits.push_back(current);
			palindrom = palindrom / 10;
		}
		
		bool is_palindrom = true;
		for(int i = 0; i < digits.size() / 2; i++)
		{
			if(digits[i] != digits[ digits.size()-1-i ])
				is_palindrom = false;
				break;
		}
		
		if(is_palindrom)
			amount++;
			*/
	}
	
	cout << amount;
}

