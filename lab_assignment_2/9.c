#include<stdio.h>
int average(int arr[], int n)
{
    float avg = 0;
    int sum = 0, count = 0;

    for(int i=0; i<n; i++)
    {
        if(*(arr+i)%2 == 0)
        {
            sum+=*(arr+i);
            count++;
        }
    }
    avg = sum / count;

    return avg;
}

int prime_numbers(int arr[], int n)
{
    int count = 0;

    for(int i=0; i<n; i++)
    {
        int flag = 0;
        if(*(arr+i)==0 && *(arr+i) == 1)
        {
            flag = 1;
        }
        for(int j=2; j<*(arr+i); j++)
        {
            if(*(arr+i)%j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            count++;
        }
    }

    return count;
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

    int prime = prime_numbers(arr, n);
    float avg = average(arr, n);

    printf("Prime numbers: %d\n", prime);
    printf("Average of all even integers: %.2f\n", avg);

    return 0;
}
