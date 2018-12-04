#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main()
{
	//freopen("prime.in", "r", stdin);
	//freopen("prime.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	
	long long number;
	bool is_prime;
	
	cin >> number;
	
	is_prime = true;
	for(int i = 0; i < sqrt(number); i++)
	{
		if( number%i == 0)
			is_prime = false;
			
	}
	
	if(is_prime)
	{
		cout << "prime";
	}
	
}

