#include <iostream>
int a[100010], N;
long long unsigned sum=0, count=0, minimum=2000000000;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen("circland.in", "r", stdin);
    //freopen("circland.out", "w", stdout);
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
    {
        scanf("%d", &a[i]);
        sum+= a[i];
    }
    for(int i = 1; i < N; i++)
    {
        minimum = std::min(minimum,sum+count-a[i]);
        count += a[i];
    }

    for(int i = 0; i < N/2; i++)
        std::swap(a[i],a[N-i]);
    //ia?aoii
    //std::cout << minimum << std::endl;
    minimum = std::min(minimum, count);
    count = 0;
    for(int i = 0; i < N; i++)
    {
        minimum = std::min(minimum,sum+count-a[i]);
        count+= a[i];
    }
    //std::cout << minimum << std::endl;
    minimum = std::min(minimum, count);
    printf("%llu", minimum);
}
