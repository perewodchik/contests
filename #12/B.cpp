#include <iostream>
#include <string>
using namespace std;

int main()
{
	freopen("encoding.in", "r", stdin);
    freopen("encoding.out", "w", stdout);
    string word;
    int K;
    cin >> K >> word;
    K %= 32;
    for(int i = 0; i < K; i++)
    {
    	for(int j = 0; j < word.size(); j++)
    	{
    		word[j]++;
    		word[j] = (word[j] - 'À')%32 + 'À';	
		}
    	
	}
	cout << word;
}
