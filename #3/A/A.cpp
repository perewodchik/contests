#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;



int main()
{
	freopen("ball.in", "r", stdin);
	freopen("ball.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	int n, a, m, input;
	int ball_at;
	cin >> n >> a >> m;
	vector<int> ball(n+1);
	
	
	for(int i = 1; i <= n; i++)
		cin >> ball[i];
	
	ball_at = a;
	while(m > 0)
	{
		ball_at = ball[ball_at];
		m--;
	}
	cout << ball_at;
	return 0;
}


