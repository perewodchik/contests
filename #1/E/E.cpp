#include <iostream>
using namespace std;

/* Запишите в выходной файл большее из чисел A и B*/

int main()
{
	int a,b;
	int max;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> a >> b;
	if (a>b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	cout << max;
}
