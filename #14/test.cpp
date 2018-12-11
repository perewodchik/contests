#include <iostream>
using namespace std;
int a[1000];
int b[1000];
int c[1000];
 
void reduce_array(int array[])
{
	bool zeroes = true;
    for(int i = array[0]; i >= 1; i--)
    {
        if(array[i] != 0) break;
        array[0]--;
    }
}

void to_null(int a[])
{
	for(int i = 1; i<=a[0]; i++)
	{
		a[i] = 0;
	}
	a[0] = 0;
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

//копирует в массив а значения b
void copy(int a[], int b1[])
{
	for(int i = 1; i <= a[0]; i++)
		a[i] = 0;
	
	for(int i = 1; i <= b1[0]; i++)
		a[i] = b1[i];
	a[0] = b1[0];
}

void multiply(int a[], int b[], int c[])
{
	//с занулен
	c[0] = 1;
    for(int i = 1; i <= b[0]; i++)
    {
         
        for(int k = 1; k <= a[0];k++)
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
 
int main()
{
	freopen("bazil.in", "r", stdin);
	freopen("bazil.out", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    int A,B,K;
    cin >> A >> B >> K;
    c[0] = 1;
    c[1] = 1;
    for(int i = 1; i <= K; i++)
    {
    	copy(a,c);
    	to_null(c);
    	num_to_array(A+B, b);
    	multiply(a,b,c);
    	reduce_array(c);
	}
    
    for(int i = c[0]; i > 0; i--)
    {
    	cout << c[i];
	}
    
}
