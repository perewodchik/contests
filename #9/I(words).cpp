#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{	
	freopen("words.in", "r", stdin);
	freopen("words.out", "w", stdout);
	int K;
	bool tire = false;
	string word;
	getline(cin, word);
	
	for(int i = 0; i < word.size(); i++)
	{
		if(!( (word[i] >= 'A' && word[i] <= 'Z')              //заглавные буквы
		||    (word[i] >= 'a' && word[i] <= 'z')             //строчные буквы
		||    (word[i] >= '0' && word[i] <= '9' && i != 0)    //цифры
		||    (word[i] == '-' && !tire && i !=0 ) ))                  //был ли тире
		{
			cout << "no";
			return 0;
		}
		if(!tire && word[i] == 45)
			tire = true;
		
	}
	cout << "yes";
	return 0;
}



/*
	char input;
	bool first = true;
	while( (input = getchar()) != '\n' && input != EOF)
	{
		if(!( (input >= 'A' && input <= 'Z')              //заглавные буквы
		||    (input >= 'a' && input <= 'z')             //строчные буквы
		||    (input >= '0' && input <= '9' && !first)    //цифры
		||    (input == '-' && !tire ) 
		//||    (input == 32)
		))                 
		{
			cout << int(input) << " no";
			return 0;
		}
		first = false; 
		if(!tire && input == '-')
			tire = true;
	}
	*/



