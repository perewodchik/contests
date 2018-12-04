#include <iostream>
#include <string>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	freopen("unpack.in", "r", stdin);
	freopen("unpack.out", "w", stdout);
	string seq;
	int num=0, index=0;
	char c;
	while((c = getchar()) != EOF)
	{
		if(c >= '0' && c <= '9')
			num = num*10 + (c-'0');
		else
		{
			if(num == 0)
			{
				seq.push_back(c);
				index++;
			}
			for(int i = 0; i < num; i++)
			{
				seq.push_back(c);
				index++;
			}
			num = 0;
		}
	} 
	cout << seq;
	 
	return 0;
}
