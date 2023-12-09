#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    int kth = 1;

    // for even
    for(int i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            arr[kth] = i;
            kth++;
        }
    }
    // for odd
    for(int i=1; i<=n; i++)
    {
        if(i%2 != 0)
        {
            arr[kth] = i;
            kth++;
        }
    }
    // printing array values
    for(int i=1; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // k th element
    for(int i=1; i<=n; i++)
    {
        if(i == k)
        {
            printf("The %dth element in this sequence is %d.", k, arr[i]);
            break;
        }
    }


    return 0;
}
