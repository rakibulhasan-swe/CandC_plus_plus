#include<stdio.h>
#include<string.h>

int median(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int result = 0;
    if(n%2 == 0)
    {
        result = (arr[n/2] + arr[n/2-1]) / 2;
        return result;
    }
    else
    {
        return arr[n/2];
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", median(arr, n));


    return 0;
}
