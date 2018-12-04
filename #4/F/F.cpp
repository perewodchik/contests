#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	freopen("prime2.in", "r", stdin);
	freopen("prime2.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	
	long long number, max;
	int amount;
	bool is_prime;
	
	max = 0;
	cin >> amount;
	
	for(int k = 0; k < amount; k++)
	{
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
		
		
		if(is_prime && number > max)
			max = number;
			
	}
	cout << max;
	return 0;
}


