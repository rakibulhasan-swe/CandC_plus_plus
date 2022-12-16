#include <bits/stdc++.h>
using namespace std;

// swap function
void swap(int arr[], int a, int b)
{
    int t = arr[a];
    arr[a] = arr[b];
    arr[b] = t;
}

// partition function
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr, i, j);
        }
    }
    swap(arr, low, j);

    return j;
}

// quick sort function
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// main function code
int main()
{
    int n;
    cout << "Give array size: ";
    cin >> n;
    int arr[n];

    // data input
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // quick sort function calling
    quickSort(arr, 0, n-1);

    // after sorting
    cout << "Sorted array in ascending order: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
