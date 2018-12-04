#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int digit_sum(long long n)
{
	int sum=0;
	while(n)
	{
		sum += (n%10);
		n /= 10;
	}
	return sum;
}

int first_digit(long long a)
{
	int a_f;
	while(a)
	{
		a_f = a%10;
		a /= 10;
	}
	return a_f;
}

int digit_mult(long long n)
{
	int mult=1;
	while(n)
	{
		mult *= n%10;
		n /= 10;
	}
	return mult;
}


using namespace std;

int main()
{
	//freopen("root.in", "r", stdin);
	//freopen("root.out", "w", stdout);
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	vector<long long> seq;
	vector<long long> candids;
	long long input;
	int sum;
	int min_digit=10;
	int mult = 0;
	int amount = 0;
	int last_min = 0;
	
	while(cin >> input)
	{
		seq.push_back(input);
	}
	
	sum = 0;
	for(int i = 0; i < seq.size(); i++)
	{
		if(digit_sum(seq[i]) > sum)
		{
			sum = digit_sum(seq[i]);
			candids.push_back(seq[i]);
		}
	}
	
	vector<int> same_sum;
	for(int i = 0; i < candids.size(); i++)
	{
		if(digit_sum(candids[i]) == sum)
		{
			same_sum.push_back(candids[i]);
			if(first_digit(candids[i]) < min_digit)
				min_digit = first_digit(candids[i]);
		}
	}
	
	if(same_sum.size() > 1)
	{
		vector<int> same_min_digit;
		for(int i = 0; i < same_sum.size(); i++)
		{
				if(first_digit(same_sum[i]) == min_digit)
				{
					same_min_digit.push_back(same_sum[i]);
					if( digit_mult(same_sum[i]) > mult)
						mult = digit_mult(same_sum[i]);	
				}	
		}
		
		if(same_min_digit.size() > 1)
		{
			for(int i = 0; i < same_min_digit.size(); i++)
			{
			
				if(mult == digit_mult(same_min_digit[i]))
				{
					if(last_min > same_min_digit[i])
						last_min = same_min_digit[i];
				}		
			}
			cout << last_min;
			return 0;
		}
		else
			cout << same_min_digit[0];
	}
	else
		cout << same_sum[0];

}
