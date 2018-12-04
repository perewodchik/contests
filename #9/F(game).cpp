#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;


int main()
{
	freopen("game.in", "r", stdin);
	freopen("game.out", "w", stdout);
	int N,A,B,S, A_victory=0, B_victory=0;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> A >> B >> S;
		if(abs(S-A) < abs(B-S))
			A_victory++;
		else 
		if(abs(S-A) > abs(B-S))
			B_victory++;
	}
	cout << A_victory << " " << B_victory;
}
