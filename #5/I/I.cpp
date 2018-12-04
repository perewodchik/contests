#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

bool prime(int n)
{
	for(int i = 2; i < (int)sqrt(n)+1; i++)
	{
		if(n % i == 0 && (n != 2))
		{
			return false;	
		}	
	}
	return true;
}

int root(int number)
{
	bool is_prime = prime(number);
	int sum = 0;
	int number_copy = number;
	if(!is_prime)
	{
		while(number_copy)
		{
			sum += (number_copy % 10);
			number_copy /= 10;
		}
	}
	if(number == 1)
	{
		return 0;
	}
	else if (is_prime)
	{
		return number;
	}
	else if (number > 9)
	{
		return root(sum);
	}
	else if(number <= 9)
	{
		return number/2;
	}
}

using namespace std;

int main()
{
	freopen("root.in", "r", stdin);
	freopen("root.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int number;
	int result;
	cin >> number;
	result = root(number);
	cout << result;
	

}
