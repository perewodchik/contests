#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;


int main()
{
	freopen("stair.in", "r", stdin);
	freopen("stair.out", "w", stdout);
	long long N,K,M;
	cin >> N >> K;
	M = (2*N)/(K*(K+1));
	cout << M;
}
