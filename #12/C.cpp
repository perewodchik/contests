#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

int a[1000010], b[1000010], minimum=1000000010,N1, N2;

int main()
{
	//freopen("between.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	freopen("between.in", "r", stdin);
    freopen("between.out", "w", stdout);
    scanf("%d", &N1);
    for(int i = 0; i < N1; i++)
    {
    	scanf("%d", &a[i]);
	}
	scanf("%d", &N2);
    for(int i = 0; i < N2; i++)
    {
    	scanf("%d", &b[i]);
	}
	std::sort(a,a+N1);
	std::sort(b,b+N2);
	int i=0,j=0, current=0, array=-1;
	/*
		-1 - начало
		0 - a 
		1 - b
		2 - any
	*/
	while(i < N1 && j < N2)
	{
		current = a[i]-b[j];
		if(current<0){
			current *= -1;
			i++;
		}
		else if(current>0)
			j++;
		else
		{
			minimum = 0;
			break;
		}
		minimum = std::min(minimum,current);
		
	}
	
	printf("%d", minimum);
}
