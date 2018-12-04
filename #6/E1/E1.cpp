#include <iostream>

using namespace std;

unsigned char symbol[256];

int main()
{
	//freopen("symbol1.in", "r", stdin);
	//freopen("symbol1.out", "w", stdout);
	
	char c;
	int max, char_index;
	FILE * input;
	FILE * output;
	
	input = fopen("symbol1.in", "r");
	output = fopen("symbol1.out", "w");
	
	
	while( (c = getc(input)) != EOF)
	{
		if(c == '\n' || c == ' ')
			continue;
		symbol[c]++;
	}
	
	max = 0;
	for(int i = 0; i < 256; i++)
	{
		if(symbol[i] > max)
		{
			max = symbol[i];
			char_index = i;
		}
		if(symbol[i] == max && char_index < i)
			char_index = i;
	}
	fprintf(output, "%c", char_index);
	
	return 0;
}


