#include<stdio.h>

int lucky_seven(int arr[], int n)
{
    int count = 0;

    for(int i=1; i<=n; i++)
    {
        while(*(arr+i) != 0)
        {
            if(*(arr+i)%10 == 7)
            {
                count++;
                *(arr+i) = *(arr+i) / 10;
            }else{
                *(arr+i) = *(arr+i) / 10;
            }
        }
    }


    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int val = lucky_seven(arr, n);

    if(n%2 == 0)
    {
        if(val>=n/2)
        {
           printf("Beautiful\n");
        }else{
            printf("Ugly\n");
        }
    }else{
        int size = n/2+1;
        if(val>=size)
        {
           printf("Beautiful\n");
        }else{
            printf("Ugly\n");
        }
    }

    return 0;
}
