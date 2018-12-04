#include <iostream>
using namespace std;

/* Требуется ввести число из входного файла и вывести в выходной файл */

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a;
	cin >> a;
	cout << a;
}
