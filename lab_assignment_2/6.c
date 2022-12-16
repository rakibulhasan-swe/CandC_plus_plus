#include<stdio.h>

int divide_by_5(int arr[], int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%5 == 0)
        {
            count++;
        }
    }

    return count;
}

int divide_by_3(int arr[], int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%3 == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int divBy3 = divide_by_3(arr, n);
    int divBy5 = divide_by_5(arr, n);

    for(int i=0; i<n; i++)
    {
        if(arr[i]%3 == 0 && arr[i]%5 == 0)
        {
            count++;
        }
    }

    int result = (divBy3+divBy5) - count;

    if(result!=0)
    {
         printf("%d\n", result);
    }
    else
    {
        printf("-1\n");
    }


    return 0;
}
