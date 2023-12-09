#include<stdio.h>

int findNumber(int arr[], int n, int s)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == s)
        {
            return i;
        }
    }

    return 0;
}

int main()
{
    int t, n, s, c = 1;
    scanf("%d", &t);

    while(t!=0)
    {
        scanf("%d", &n);
        int arr[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        scanf("%d", &s);

        int res = findNumber(arr, n, s);
        if(res == 0)
        {
            printf("Case %d: Not Found\n", c);
            c++;
        }
        else
        {
            printf("Case %d: %d\n", c, res+1);
            c++;
        }

        t--;
    }



    return 0;
}
