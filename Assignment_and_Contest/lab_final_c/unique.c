#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ctr, k, count = 0;
    scanf("%d", &n);

    char arr1[n];

    scanf("%s", arr1);

    for(int i=0; i<n; i++)
    {
        ctr=0;
        for(int j=0,k=n; j<k+1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
               {
                 ctr++;
               }
             }
        }

       if(ctr==0)
        {
          count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
