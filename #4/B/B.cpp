#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	freopen("prime.in", "r", stdin);
	freopen("prime.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	
	long long number;
	bool is_prime;
	cin >> number;
	
	is_prime = true;
	if(number == 1)
		is_prime = false;
	for (int i = 2; i < sqrt(number)+1; i++)
	{
		if ( (number % i == 0) && (number != 2) ) 
		{
			is_prime = false;
			break;
		}
	}
	if(is_prime)
	{
		cout << "prime" << endl;
	}
	else
	{
		cout << "not" << endl;
	}

}


