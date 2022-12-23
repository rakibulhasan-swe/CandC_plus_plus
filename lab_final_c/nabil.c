#include<stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main(){
    int t, max, min;
    scanf("%d",&t);

    while(t--) {
        int n;
        scanf("%d", &n);
        int arr[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        bubbleSort(arr, n);

        max = arr[n-1];
        min = arr[0];

        if(max*max < min*min)
        {
           printf("%d %d %d %d\n", min*min, max*max, max+max, min+min);
        }else{
            printf("%d %d %d %d\n", max*max, min*min, max+max, min+min);
        }
    }
    return 0;
}
