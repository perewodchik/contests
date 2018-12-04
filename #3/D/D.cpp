#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;



int main()
{
	freopen("friends.in", "r", stdin);
	freopen("friends.out", "w", stdout);
	long long int A, B,x, A_copy, B_copy;
	const int digits_amount = 10;
	ios_base::sync_with_stdio(0);
	bool friends = true;
	cin >> A >> B;
	vector<bool> digitsA(digits_amount);
	vector<bool> digitsB(digits_amount);
	
	A_copy = A;
	B_copy = B;
	
	while (A > 0)
	{
		x = A % 10;
		if(!digitsA[x])
		{
			digitsA[x] = true;
		}
		A = int(A/10);
	}
	
	while (B > 0)
	{
		x = B % 10;
		if(!digitsA[x])
		{
			friends = false;
		}
		B = int(B/10);
	}
	
	B = B_copy;
	while (B > 0)
	{
		x = B % 10;
		if(!digitsB[x])
		{
			digitsB[x] = true;
		}
		B = int(B/10);
	}
	
	A = A_copy;
	while (A > 0)
	{
		x = A % 10;
		if(!digitsB[x])
		{
			friends = false;
		}
		A = int(A/10);
	}
	
	if(friends)
		cout << "friends";
	else
		cout << "no";
	
	return 0;
}


