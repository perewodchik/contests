#include <iostream>

int main()
{
	freopen("basil.in", "r", stdin);
	freopen("basil.out", "w", stdout);
	 
	 int A,B,C,D,E,F,G,total;
	 scanf("%d%d%d%d%d%d%d", &A,&B,&C,&D,&E,&F,&G);
	 total = (A-D-E+G)+(B-D-F+G)+(C-E-F+G)+(D+E+F-G-G);
	 printf("%d", total);
	 
	return 0;
}
