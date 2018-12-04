#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int x[3];
int y[3];

int main()
{
	freopen("tram.in", "r", stdin);
    freopen("tram.out", "w", stdout);
    int half_perimeter;
    scanf("%d %d %d %d %d %d", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2]);
	sort(x,x+3);
	sort(y,y+3);
	half_perimeter = abs(x[2]-x[0]) + abs(y[2]-y[0]);
	printf("%d", half_perimeter);
}
