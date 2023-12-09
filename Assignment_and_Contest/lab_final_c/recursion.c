#include <stdio.h>

int maximum(int array[], int index, int len);
int minimum(int array[], int index, int len);


int main()
{
    int max, min;
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        max = maximum(array, 0, n);
        min = minimum(array, 0, n);

        printf("Minimum element in array = %d\n", min);
        printf("Maximum element in array = %d\n", max);
    }

    return 0;
}
