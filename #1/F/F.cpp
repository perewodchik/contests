#include <iostream>
using namespace std;

/* �������� � �������� ���� �������� �������� � �������� �� ����� � � B*/

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
