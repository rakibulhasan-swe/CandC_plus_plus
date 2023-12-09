#include<stdio.h>

void swap(int *ptr1, int *ptr2 )
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int n, t, l, r;
    scanf("%d", &n);
    int arr[n];

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &t);
    while(t!=0)
    {
        scanf("%d %d", &l, &r);
        if(l!=r)
        {
            swap(&arr[l], &arr[r]);
        }

        t--;
    }

    // array print
     for(int i=1; i<=n; i++)
     {
        printf("%d ", arr[i]);
     }

     printf("\n");


    return 0;
}
