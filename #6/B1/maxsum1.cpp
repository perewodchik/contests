/*#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;



int main()
{
	freopen("maxsum1.in", "r", stdin);
	freopen("maxsum1.out", "w", stdout);
	ios::sync_with_stdio(0);
	//cin.tie(0);
	
	long long input;
	long long sum=0;
	long long best =0;
	while(cin >> input)
	{
		sum = max(input, sum+input);
		best = max(best, sum);
	}
	cout << best;
	
	return 0;
}
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stdio.h>
#define INF -1000001

using namespace std;



int main()
{
	FILE *input;
	FILE *output;
	
	input = fopen("maxsum1.in", "r");
	output = fopen("maxsum1.out", "w");
	int n;
	long long sum= INF;
	long long best = INF;
	while( fscanf(input, "%d ", &n) != EOF)
	{
		sum = max((long long)n, (long long)sum+n);
		best = max((long long)best, (long long)sum);
		
	}
	fprintf(output, "%I64d", best);
	
	return 0;
}



