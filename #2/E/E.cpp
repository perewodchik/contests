#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	ifstream is("input.txt");
	freopen("output.txt", "w", stdout);
	long long int a, min;
	
	min = 1000000001;
	
	while(!is.eof())
	{
		is >> a;
		if(a < min)
		{
			min = a;
		}
	}
	cout << min;
}
