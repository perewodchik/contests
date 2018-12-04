#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct point {
	long long x;
	long long y;
	point(long long a, long long b)
	:x(a), y(b)	{}
};
int main()
{
	long long x, y, velocity_submarine, velocity_torped, velocity_ship,
				 delta_x, delta_y;			 
	double ship_dist, submarine_dist, time;
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(0);
	
	cin >> x >> y;
	point* submarine = new point(x,y);
	cin >> x >> y;
	point* ship = new point(x,y);
	cin >> x >> y;
	point* intersect = new point(x,y);
	
	cin >> velocity_submarine >> velocity_torped >> velocity_ship;
	
	velocity_torped += velocity_submarine;
	
	delta_x = intersect->x - ship->x;
	delta_y = intersect->y - ship->y;
	ship_dist = sqrt( delta_x*delta_x + delta_y*delta_y );
	delta_x = intersect->x - submarine->x;
	delta_y = intersect->y - submarine->y;
	submarine_dist = sqrt( delta_x*delta_x + delta_y*delta_y );
	
	time = (double)(ship_dist*velocity_torped - submarine_dist*velocity_ship)/(velocity_ship*(velocity_torped - velocity_submarine));
	
	if(time >= 0)
		cout << setprecision(3) << fixed << time;
	else
		cout << -1;
}
