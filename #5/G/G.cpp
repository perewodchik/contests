#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

struct position {
	int x;
	int y;
	position(string s)
	{
		switch(s[0])
		{
			case 'a':
				x = 0;
				break;
			case 'b':
				x = 1;
				break;
			case 'c':
				x = 2;
				break;
			case 'd':
				x = 3;
				break;
			case 'e':
				x = 4;
				break;
			case 'f':
				x = 5;
				break;
			case 'g':
				x = 6;
				break;
			case 'h':
				x = 7;
				break;
		}
		y = s[1] - '0' -1;
	}
};

int main()
{
	//freopen("subseq.in", "r", stdin);
	//freopen("subseq.out", "w", stdout);
	//ios::sync_with_stdio(0);
	int n;
	vector< vector<bool> > figures(8);
	position* figure = 0;
	string input;
	int kills = 0;
	
	cin >> input;
	position* queen = new position(input);
	cin >> n;
	
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			figures[i][j] = false;		
		}
	}
	for(int i = 0; i < n; i++)
	{
		figure = new position(input);
		figures[figure->x][figure->y] = true;
	}
	
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(figures[i][j] && (queen->x == i || queen->y == j) )
			{
				kills++;
			}
		}
	}
	int k = 0;
	while( ( (queen->x + k) < 8) && ( (queen->y + k) < 8) )
	{
		if(figures[queen->x + k][queen->y+k])
			kills++;
		
		k++;
	}
	while( ( (queen->x + k) < 8) && ( (8 - queen->y - k) > 0) )
	{
		if(figures[queen->x + k][8 - queen->y - k])
			kills++;
		
		k++;
	}
	while( ( (8 - queen->x - k) < 8) && ( (queen->y + k) < 8) )
	{
		if(figures[8 - queen->x - k][8 - queen->y - k])
			kills++;
		
		k++;
	}
	while( ( (8 - queen->x - k) < 8) && ( (8 - queen->y - k) > 0) )
	{
		if(figures[8 - queen->x - k][8 - queen->y - k])
			kills++;
		
		k++;
	}
	cout << kills;
}

