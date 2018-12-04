#include <iostream>
using namespace std;

/* Запишите в выходной файл разность большего и меньшего из чисел А и B*/

int main()
{
	int a,b;
	int max,min;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> a >> b;
	if (a>b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	cout << max-min;
}
