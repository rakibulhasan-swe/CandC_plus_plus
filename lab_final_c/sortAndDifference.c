#include<stdio.h>

void sortAscending(int arr[], int n)
{
    int t;
    for (int i=0 ; i<n-1; i++) {
        for (int j=0 ; j<n-i-1; j++) {
          if (arr[j] > arr[j+1]) {
            t         = arr[j];
            arr[j]   = arr[j+1];
            arr[j+1] = t;
          }
        }
      }
}

void sortDecending(int arr[], int n)
{
    int t;
    for (int i=0 ; i<n-1; i++) {
        for (int j=0 ; j<n-i-1; j++) {
          if (arr[j] < arr[j+1]) {
            t         = arr[j];
            arr[j]   = arr[j+1];
            arr[j+1] = t;
          }
        }
      }
}


int main()
{
    int n;
    scanf("%d", &n);

    int arr1[n], arr2[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    // for second array
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    sortAscending(arr1, n);
    sortDecending(arr2, n);

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr1[i] - arr2[i]);
    }
    printf("\n");


    return 0;
}
