#include <iostream>
using namespace std;

bool can_hit(int x, int y)
{
	if(x < 1 || x > 8)
		return false;
	if(y < 1 || y > 8)
		return false;
	return true;
}

int main()
{
	freopen("knight.in", "r", stdin);
	freopen("knight.out", "w", stdout);
	ios::sync_with_stdio(0);
	
	int x,y, count;
	char c;
	c = getchar();
	x = c - 'a' + 1;
	c = getchar();
	y = c - '0';
	count = 0;
	if(can_hit(x+1,y+2)) count++;
	if(can_hit(x-1,y+2)) count++;
	if(can_hit(x+2,y+1)) count++;
	if(can_hit(x+2,y-1)) count++;
	if(can_hit(x+1,y-2)) count++;
	if(can_hit(x-1,y-2)) count++;
	if(can_hit(x-2,y+1)) count++;
	if(can_hit(x-2,y-1)) count++;
	
	cout << count;
	
	
	return 0;
}
