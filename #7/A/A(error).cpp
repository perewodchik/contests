#include <iostream>
using namespace std;

int a[10];
int b[10];

int main()
{
	freopen("error.in", "r", stdin);
	freopen("error.out", "w", stdout);
	ios::sync_with_stdio(0);
	
	char c;
	int n;
	bool flag = false;
	while((c = getchar()) !='\n' && c != EOF)
	{
		if(c >= '0' && c <= '9')
		{
			n = c - '0';
			a[n]++;
		}
	}
	while((c = getchar()) !='\n' && c != EOF)
	{
		if(c >= '0' && c <= '9')
		{
			n = c - '0';
			b[n]++;
		}
	}
	
	for(int i = 0; i < 10; i++)
	{
		if(a[i] != b[i])
			flag = true;
	}
	if(flag)
		cout << "no";
	else
		cout << "yes";
	
	return 0;
}
