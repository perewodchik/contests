#include <iostream>
using namespace std;

//Требуется найти медиану трёх чисел.

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	long long int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	for(int i = 2; i > 0; i--)
	{
		for(int j = 0; j < i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j], arr[j+1]);
			}
		}
	}
	cout << arr[1];
}


