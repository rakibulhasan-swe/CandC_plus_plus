#include<stdio.h>

int main()
{
    long long int n, sum = 0;
    scanf("%lld", &n);

    for(int i=1; i<=6; i++)
    {
        sum += (n*n);
    }

    printf("%lld\n", sum);


    return 0;
}
