#include <iostream>

#define SIZE 1000

using namespace std;



int a,b,k, sum=1;

int ar[SIZE], br[SIZE], cr[SIZE];

void c_to_a(int a[], int c[])
{
	for(int i = 1; i <= c[0]; i++)
	{
		a[i] = c[i];
	}
	a[0] = c[0];
}

void reverse_array(int array[])
{
	for(int i = 1; i <= array[0]/2; i++)
	{
		swap(array[i], array[ array[0]+1-i]);
	}
}


void to_null(int c[])
{
	for(int i = 1; i <= c[0]; i++)
		c[i] = 0;
	c[0] = 0;
}


void num_to_array(int a, int array[])
{
	to_null(array);
	
	while(a)
	{
		array[0]++;
		array[ array[0] ] = a%10;
		a/=10;
	}
}

void multiply(int a[], int b[], int c[])
{
	to_null(cr);
	
	c[0] = 1;
	for(int i = 1; i <= b[0]; i++)
	{
		for(int k = 1; i <= a[0]; k++)
		{
			c[k+i-1] += a[k]*b[i];
			if(c[k+i-1] >= 10)
			{
				c[k+i] += (c[k+i-1] / 10);
				c[k+i-1] %= 10;
			}
			c[0]++;
		}
	}
}

void print(int array[])
{
    bool zeroes = true;
    for(int i = array[0]; i >= 1; i--)
    {
        if(array[i] != 0) zeroes = false;
        if(!zeroes) cout << array[i];
        if(zeroes && i == 1)
            cout << '0';
    }
}

int main()
{
	
	//freopen("bazil.in", "r", stdin);
	//freopen("bazil.out", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	cin >> a >> b >> k;
	cr[0] = 1;
	cr[1] = 1;
	
	for(int i = 1; i <= k; i++)
	{
		c_to_a(ar,cr);
		num_to_array(a+b, br);
		cout << ar[0];
		multiply(ar,br,cr);
		to_null(ar);
	}
	
}
