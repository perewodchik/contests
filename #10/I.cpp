#include <iostream>
#include <cmath>
#include <iomanip>

#define abs(x) ((x)>0?x:(-x))

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	double x1, y1, x2, y2,x3, y3, surface, perimeter;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	surface = 0.5000*fabs( (x1-x3)*(y2-y3)-(x2-x3)*(y1-y3) );
	
	perimeter = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) 
				+ sqrt( (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3) )
				+ sqrt( (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3) );
				
	cout << setprecision(2) << fixed << perimeter << " " << setprecision(3) << fixed << surface;
	
	return 0;
}
