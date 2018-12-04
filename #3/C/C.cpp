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
	
	clockwise = 0;
	picked_up = false;
	for(int i = 1; i <= n; i++)
	{
		clockwise += T;
		
		if(i == A || (i==0 && A==0))
			picked_up = true;
				
		if(i == B && picked_up)
			break;
		
		if(i == n)
			i = 0;
		
		if(i == B && picked_up)
			break;	
			
	}
	counter_clockwise = 0;
	picked_up = false;
	for(int i = n-1; i >= 0; i--)
	{
		counter_clockwise += T;
		
		if(i == A || (i==(n-1) && A==0))
			picked_up = true;
			
		if(i == B && picked_up)
			break;
			
		if(i == 0)
			i = n;
			
		if(i == B && picked_up)
			break;
	}
	
	cout << min(clockwise, min(counter_clockwise, P));
	
	return 0;
}


