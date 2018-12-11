#include <iostream>
#include <math.h>
using namespace std;

int x,y,k;
double q, geo_sum,arif_sum;

/*
ooyy/:::::::+oyyyyyyyyyyyyyyyyyyyyyyoossso+/::::::
yysss+:::::::::+syyyyyyyyyyyyyyyyyyyso/::::::::::/
hhhyyys/:::::::::/+oo+++++/////////:::::::::::::/o
hhhhhhhho:::::::::::::::::::::::::::::::::::::+sys
hhhhhhhhhyo+/::::::::::::::::::::::::::::::/oyyyyh
hhhhhdddhhh/::::::::::::::::::::::::::::/oyyyyyyhh
hhhhdmmdhho::::/+/::::::::::::://o+::::::+yyyyyyyy
hhhhhhhyhy/:::ooydo::::::::::::oohh+::::::+hyssssy
mddhhhyyho::::/syy+::::::::::::+sys/:::::::sysssss
mmdhyyyhh+//:::::::::/os+::::::::::::::::::+ysssss
hhyyyyydhysso::::::::::::::::::::::+sssso::/ssssss
hyyyyyhdyssso::::::::+ooo++/:::::::osooss/::+yyyyy
hhhhhhhyoso+/:::::::+ys+//+o/::::::/oooo+::::sysyy
hhhhhhhh/::::::::::::oo++++o/::::::::::::::::/ysss
sssssssyy/:::::::::::://+++/::::::::::::::::::syyy
ssssssyyys/:::::::::::::::::::::::::::::::::::+yyy
*/


int main()
{
	//freopen("prog.in", "r", stdin);
	//freopen("prog.out", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	scanf("%d%d%d", &x,&y,&k);
	
	if(k == 0)
	{
		if(x == y)
		{
			printf("=");
			return 0;
		}
		if(x != y)
		{
			printf("#");
			return 0;
		}
	}
	
	if(x == y && k%2 == 0)
	{
		printf("?");
		return 0;
	}
	
	if(x == y)
	{
		printf("=");
		return 0;
	}
	
	if(x == 0)
	{
		if(y == 0)
		{
			printf("=");
			return 0;
		}
		else
		{
			printf("#");
			return 0;
		}
	}
	
	
	q = pow((double)y/x, (double)1/(k));
	arif_sum = (double)(x+y)*(k+1)/2;
	geo_sum = (double)(y*q - x)/(q-1);
	
	
	
	if(arif_sum > geo_sum)
	{
		printf(">");
		return 0;
	}
	else if(arif_sum == geo_sum)
	{
		printf("=");
		return 0;
	}
	else
	{
		printf("<");
		return 0;
	}
}
