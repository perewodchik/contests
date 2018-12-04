#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;



int main()
{
	freopen("div.in", "r", stdin);
	freopen("div.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string number;
	int sum=0;
	
	cin >> number;
	for(int i = 0; i < number.size(); i++)
		sum += number[i] - '0';
	
	if(sum % 3 == 0)
		cout << "Yes";
	else
		cout << "No";
	
	return 0;
}


