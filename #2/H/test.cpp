#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

#define inta long long int

int main()
{
	ifstream is("input.txt");
	freopen("output.txt", "w", stdout);
	inta a;
	vector< inta> arr;
	
	while(!is.eof())
	{
		is >> a;
		arr.push_back(a);
	}
	
	arr.pop_back();
	sort (arr.begin(),arr.end());
	
	for( inta j = 0; j < arr.size(); j++)
	{
		cout << arr[j] << " ";
	}
	return 0;
}
