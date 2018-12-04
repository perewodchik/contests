#include <iostream>
using namespace std;

bool f[10][10];
bool s[10][10];

bool t[10][10];

int poly(int x1, int x2)
{
	return (x2*x2 + 10 - 2*x1*x2 + x1*x1);
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(0);
	char sym;
	int height,width;
	bool hor_flag,ver_flag;
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			sym = getchar();
			if(sym == 'X')
				f[i][j] = true;
		}
		sym = getchar();
	}
	sym=getchar();
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			sym = getchar();
			if(sym == 'X')
				s[i][j] = true;
		}
		sym = getchar();
	}
	

	
	bool possible_s=true;
	bool possible_f=true;
	
	/*
	
	for(int q = 0; q < 4; q++)
	{
		for(int k = 0; k < 4; k++)
		{
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 4; j++)
				{
					if(f[i+q][j+k] && s[i][j])
						possible_s = false;
					if(s[i+q][j+k] && f[i][j])
						possible_f = false;
				}
			}
			//checking
			height = 0;
			width = 0;
			ver_flag = false;
			hor_flag = false;
			for(int m = 0; i < 9; m++)
			{
				for(int n = 0; i < 9; n++)
				{
					if(
				}	
			}
			
			
			
			possible_s = true;
			possible_f = true;
		}
	}*/
	for(int q = 0; q < 4; q++)
	{
		for(int k = 0; k < 4; k++)
		{
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 4; j++)
				{
					if(f[i+q][j+k] && s[i][j])
						possible_s = false;
					if(s[i+q][j+k] && f[i][j])
						possible_f = false;
						
				}
			}

			possible_s = true;
			possible_f = true;
		}
	}

	return 0;
}
