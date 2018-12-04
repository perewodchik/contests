#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

long long gcd(long long a, long long b)
{
	if(b == 0)
		return a;
	return gcd(b, a%b);
}

long long lcm(long long a, long long b)
{
	return a*b/gcd(a,b);
}


int main()
{
	freopen("frac.in", "r", stdin);
	freopen("frac.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long A, B, C, D;
	long long num, den, common;
	cin >> A >> B >> C >> D;
	den =  lcm(B,D);
	num = A*(den/B) + C*(den/D);
	common = gcd(num,den);
	num /= common;
	den /= common;
	
	cout << num << "/" << den;
	
	return 0;
}


