#include <iostream>
#define abs(x) ((x)>0?x:(-x))

using namespace std;

int max_presses=100;
int b[10][10];
int s[10];

void search(int n, int i)
{
	if(i == n)
	{
		int* pressed = new int[n];
		for(int k = 1; k <= n; k++)
			pressed[k] = 0;
			
		int size=0;
		for(int k = 1; k <= n; k++)
		{
			if(s[k] == 1)
			{
				for(int j = 1; j <= n; j++)
				{
					if(b[k][j])
					{
						pressed[j] = 1;
					}
				}
				size++;
			}
		}
		bool flag=true;
		for(int k = 1; k<=n; k++)
		{
			//cout << "pressed " << pressed[k] << " ";
			if(pressed[k] == 0)
			{
				flag = false;
				break;
			}
		}
		//cout << endl;
		if(flag)
		{
			max_presses = min(max_presses, size);
		}
		
		return;
	}
	search(n,i+1);
	s[i+1] = 1;
	search(n,i+1);
	s[i+1] = 0;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> b[i][j];
		}
	}
	search(n, 0);
	if(max_presses == 100)
		cout << -1;
	else
		cout << max_presses;
	/*
	cout << endl;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}*/
	
	return 0;
}
