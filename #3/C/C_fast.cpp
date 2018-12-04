#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;



int main()
{
	freopen("tram.in", "r", stdin);
	freopen("tram.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int n,A,B,T;
	long long int P, clockwise, counter_clockwise;
	bool picked_up;
	cin >> n >> A >> B >> T >> P;
	
	if(B > A)
	{
		clockwise = B*T;
		if(A != 0)
			counter_clockwise = (n-A)*T + A*T + (n-B)*T;
		else
			counter_clockwise = (n-B)*T;
	}
	else
	{
		clockwise = /*A*T + T*(n-A)*/n*T + B*T;
		counter_clockwise = (n-A)*T + (A-B)*T;
	}
	

	
	cout << min(clockwise, min(counter_clockwise, P));
	
	return 0;
}


