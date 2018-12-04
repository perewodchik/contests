#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main()
{
	freopen("encoding.in", "r", stdin);
	freopen("encoding.out", "w", stdout);
	int K;
	char tmp;
	string word;
	cin >> K >> word;
	K %= word.size();
	//tmp = word[0];
	
	for(int i = 0; i < K; i++)
	{
		for(int j = 0; j < word.size()-1; j++)
		{
			swap(word[j], word[j+1]);	
		}
	}
	reverse(word.begin(), word.end());
	cout << word;
}



