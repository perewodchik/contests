#include <iostream>
#include <vector>
using namespace std;

int main()
{
	freopen("abb.in", "r", stdin);
	freopen("abb.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	const int max_size = 1003;
	string first, second;
	
	cin >> first >> second;
	
	vector<int> a(max_size);
	vector<int> b(max_size);
	vector<int> c(max_size);
	
	for(int i = 0; i < first.size(); i++)
		a[first.size() - i] = first[i] - '0';
	
	for(int i = 0; i < second.size(); i++)
		b[second.size() - i] = second[i] - '0';


	int temp = 0;
	for(int i = 1; i < max_size; i++)
	{
		temp = temp + a[i] + b[i];
		c[i] = temp % 10;
		temp /= 10;
	}
	
	int index = max_size;
	while(c[index-1] == 0 && index > 1)
		index--;
		
	for(int i = index-1; i > 0; i--)
	{
		cout << c[i];
	}
}
