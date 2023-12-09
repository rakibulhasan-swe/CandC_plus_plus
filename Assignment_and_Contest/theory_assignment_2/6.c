#include<stdio.h>

int factorial(int n)
{
    int fact = 1;
    if(n < 0)
        printf("Error!");
    else{
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
    }

    return fact;
}
int ratio(int n1, int n2)
{
    int a = factorial(n1);
    int b = factorial(n2);

    int result = a/b;

    return result;
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    printf("%d", ratio(n1, n2));

    return 0;
}
