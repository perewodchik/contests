#include <iostream>
#include <iomanip>
#define abs(x) ((x)<0?-(x):(x))
using namespace std;
int main()
{
	freopen("triangle.in", "r", stdin);
	freopen("triangle.out", "w", stdout);
	int N, L, x,y;
	long double d=-1.0, surface;
	cin >> L >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> x >> y;
		if(d < x) d = x;
		if(d < y) d = y;
		if(d < abs(y-L)) d = abs(y-L);
		if(d < abs(x-L)) d = abs(x-L);
	}
	surface = 0.5*L*d;
	cout << setprecision(1) << fixed << surface;
}
