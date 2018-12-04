#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main()
{
	ifstream is("input.txt");
	freopen("output.txt", "w", stdout);
	long long int a;
	vector<long long int> arr;
	while(!is.eof())
	{
		is >> a;
		arr.push_back(a);
	}
	
	for(int i = 0; i < arr.size()-1; i++)
	{
		cout << arr[i];
		if(i != arr.size()-2)
		{
			cout << " ";
		}
	}
	return 0;
}
