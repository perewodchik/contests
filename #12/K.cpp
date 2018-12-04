#include <iostream>



int main()
{
	freopen("colored.in", "r", stdin);
    freopen("colored.out", "w", stdout);
    int A1=0,B1=1,C1=2, A2=0,B2=1,C2=2;
    /*
    	0 - черный
    	1 - белый
    	2 - серый
    */
    char c;
    //first
    while( c = getchar())
    {
    	if(c == '\n' || c == EOF)
    		break;
    	if(c == 'R')
    	{
    		std::swap(A1,B1);
    		std::swap(C1,A1);
		}
		else
		{
			std::swap(A1,C1);
		}
	}
	//second
	while( c = getchar())
    {
    	if(c == '\n' || c == EOF)
    		break;
    	if(c == 'R')
    	{
    		std::swap(A2,B2);
    		std::swap(C2,A2);
		}
		else
		{
			std::swap(A2,C2);
		}
	}
	if(A1 == A2 && B1 == B2 && C1 == C2)
	{
		printf("Yes");
	}
	else
		printf("No");
}
