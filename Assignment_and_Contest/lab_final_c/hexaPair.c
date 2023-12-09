#include<stdio.h>

int GCD(int n1, int n2)
{
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    return n1;
}

int main()
{
    int t, n;
    scanf("%d", &t);

    while(t!=0)
    {
        int count = 0;
        scanf("%d", &n);
        int arr[n];
        // array input
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        // pairing
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j)
                {
                    continue;
                }
                else
                {
                    int res = GCD(arr[i], arr[j]);
                    if(res == 1)
                    {
                        count++;
                    }
                }
            }
        }

        printf("%d\n", count);

        t--;
    }



    return 0;
}
