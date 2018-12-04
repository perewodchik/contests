#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;


int main()
{
	ifstream is("input.txt");
	freopen("output.txt", "w", stdout);
	long long int a,sum,n;
	vector<long long int> arr;
	sum = 0;
	n = 0;
	while(!is.eof())
	{
		is >> a;
		arr.push_back(a);
		n++;
	}
	
	for(int i = 0; i < arr.size()-1; i++)
	{
		sum = sum + arr[i];
	}
	cout << setprecision(3) << fixed << (float)sum/(n-1);
}
