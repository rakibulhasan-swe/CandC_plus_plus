#include<stdio.h>

void sum_of_even(int t)
{
    int n;
    while(t!=0)
    {
       scanf("%d", &n);

       int val = (n/4) - 3;
       for(int i=val; i<=n/4+3; i+=2)
       {
           printf("%d ", i);
       }
       printf("\n");
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    sum_of_even(t);

    return 0;
}
