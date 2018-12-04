#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	freopen("sort2.in", "r", stdin);
	freopen("sort2.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	
	vector<int> list;
	int input;
	while(cin>>input)
	{
		list.push_back(input);
	}

	sort(list.begin(),list.end());
	
	for(int i = 0; i < list.size(); i++)
	{
		if(i!=0 && list[i] == list[i-1])
			continue;
		cout << list[i] << " ";
	}
}

