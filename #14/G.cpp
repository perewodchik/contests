#include <iostream>
using namespace std;

int x1,y1,x2,y2, min_x=20, min_y=20, cur_x=0, cur_y=0;

int main()
{
	freopen("chesstor.in", "r", stdin);
	freopen("chesstor.out", "w", stdout);
	
	char x1_c,x2_c;
	scanf("%c%d %c%d", &x1_c, &y1, &x2_c, &y2);
	x1 = x1_c - 'a' + 1;
	x2 = x2_c - 'a' + 1;
	
	for(int i = x1; i != x2; i++)
	{
		cur_x++;
		if(i == 8 && i!=x2)
			i = 0;
	}
	
	min_x = min(min_x, cur_x);
	cur_x = 0;
	for(int i = x1; i != x2; i--)
	{
		cur_x++;
		if(i == 1 && i!=x2)
			i = 9;
	}
	min_x = min(min_x, cur_x);
	
	for(int i = y1; i != y2; i++)
	{
		cur_y++;
		if(i == 8 && i!=y2)
			i = 0;
	}
	
	min_y = min(min_y, cur_y);
	cur_y = 0;
	for(int i = y1; i != y2; i--)
	{
		cur_y++;
		if(i == 1 && i!=y2)
			i = 9;
	}
	min_y = min(min_y, cur_y);
	
	printf("%d", min_x+min_y);
	
}
