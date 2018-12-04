#include <iostream>
using namespace std;

//רענאפû
int first[20];
int second[20];
bool solved_first[20];
bool solved_second[20];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int x, y, penalty1=0, penalty2=0, solved1=0,solved2=0;
	
	
	while(cin >> x >> y)
	{
		if(x == 0 && y == 0)
			break;
		
		if(y >= 0 && !solved_first[x])
		{
			penalty1 += y + 20*first[x];
			solved1++;
			solved_first[x] = true;
		}
		else
			first[x]++;	
	}
	while(cin >> x >> y)
	{
		if(x==0 && y==0)
			break;
		
		if(y >= 0 && !solved_second[x])
		{
			penalty2 += y + 20*second[x];
			solved2++;
			solved_second[x] = true;
		}
		else
			second[x]++;
			
	}
	
	if( solved1 > solved2) cout << 1;
	if( solved2 > solved1) cout << 2;
	if( solved1 == solved2)
	{
		if(penalty1 < penalty2) cout << 1;
		if(penalty2 < penalty1) cout << 2;
		if(penalty1 == penalty2) cout << 0;
	}
	return 0;
}
