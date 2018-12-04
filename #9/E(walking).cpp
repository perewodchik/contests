#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

char commands[20000];

long long h[150][2];

//0 - x
//1 - y

int main()
{
	freopen("walking.in", "r", stdin);
	freopen("walking.out", "w", stdout);
	long long N, L, K, X=0,Y=0, direction=0, size =0;
	char input;
	/*
		0 - вниз
		1 - вправо
		2 - вверх
		3 - влево
	*/
	bool hedge = false;
	string command1s;
	cin >> N >> L >> K;
	getchar();
	while( (input = getchar()) != '\n' && input != EOF)
	{
		commands[size] = input;
		size++;
	}
	for(long long i = 0; i < K; i++)
		cin >> h[i][0] >> h[i][1];
	
	for(long long i = 0; i < size; i++)
	{
		
		switch(commands[i])
		{
			case 'J':
				if(!hedge)
				{
					for(long long i = 0; i < K; i++)
						if(X == h[i][0] && Y == h[i][1])
							hedge = true;
				}
				
				switch (direction)
					{
						case 0: 
							X += (!hedge)*L + hedge;
							
							break;
						case 1:
							Y -= (!hedge)*L + hedge;
							break;
						case 2:
							X -= (!hedge)*L + hedge;
							break;
						case 3:
							Y += (!hedge)*L + hedge;
							break;
					}		
				break;
				
			case 'R':
				direction = (direction+1)%4;
				break;
		}
	}
	cout << X << " " << Y;
}
