#include <iostream>
using namespace std;

/* Запишите в выходной файл число А*Б */

int main()
{
	long long int a,b;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> a >> b;
	cout << a*b;
}


