#include<stdio.h>

int main()
{

	long long int n, total = 0;
	scanf("%lld",&n);

    total = (n*(n-1))/2;
    printf("%lld\n",total);


	return 0;
}

