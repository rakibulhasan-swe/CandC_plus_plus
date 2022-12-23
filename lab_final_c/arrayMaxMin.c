#include<stdio.h>

int main()
{
    int t, n, max, min;
    scanf("%d", &t);

    while(t!=0)
    {
        scanf("%d", &n);
        int arr[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        max = arr[0];
        min = arr[0];

        for(int i=1; i<n; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
            if(arr[i] < min)
            {
                min = arr[i];
            }
        }


        if(max*max <= min*min)
        {
           printf("%d %d %d %d\n", min*min, max*max, max+max, min+min);
        }else{
            printf("%d %d %d %d\n", max*max, min*min, max+max, min+min);
        }

        t--;
    }


    return 0;
}
