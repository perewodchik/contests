#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	long long int a;
	vector<long long int> arr;
	long long int n = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a;
		arr.push_back(a);
	}
	
	for(long long int i = n-1; i >= 0; i--)
	{
		cout << arr[i];
		if(i != 0)
		{
			cout << " ";
		}
	}
	cout << " " << n << " ";
	return 0;
}
