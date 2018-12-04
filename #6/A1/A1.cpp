#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
using namespace std;



int main()
{
	freopen("sumdiv1.in", "r", stdin);
	freopen("sumdiv1.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	
	long long num;
	long long sum = 1;
	cin >> num;
	unordered_map<long long, long long> primeDiv;
	for(long long i = 2; i*i <= num; i++)
	{
		while(num% i == 0)
		{
			if(primeDiv.find(i) == primeDiv.end())
			{
				primeDiv[i] = 1;
			}
			primeDiv[i] *= i;
			num /= i;
		}
	}
	if(num != 1)
	{
		primeDiv[num] = num;
	}
	for(unordered_map<long long, long long>::iterator it = primeDiv.begin(); it != primeDiv.end(); it++ )
		sum *= ( it->second * it->first -1 ) / ( it->first -1);
	if(num)
		cout << sum;
	else cout << 0;
	
	return 0;
}


