#include <iostream>
using namespace std;

/* �������� � �������� ���� ������� �� ����� A � B*/

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
