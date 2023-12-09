#include<stdio.h>

int main()
{
    int n, s, r1 = 0, r2 = 0;
    scanf("%d %d", &n, &s);

    r1 = s - n;
    r2 = r1 / 2;

    printf("%d\n", r2);


    return 0;
}
