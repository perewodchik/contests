#include <iostream>
using namespace std;
int c[10];
int s[20000];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int N;
	cin >> N;
	s[0] = 1;
	for(int i = 0; i < 4; i++)
		cin >> c[i];		
	for(int i = 1; i <= N; i++)
		for(int j = 0; j < 4; j++)
			if(i - c[j] >= 0)
				s[i] += s[i - c[j]];
	cout << s[N];
}
