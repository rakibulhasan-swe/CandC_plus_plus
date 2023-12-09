#include<bits/stdc++.h>
using namespace std;

void distinct(int arr[], int n)
{
    int count  = 0;
    sort(arr, arr+n);

    for(int i=0; i<n; i++)
    {
        while(arr[i] == arr[i+1] && i < n-1)
        {
            i++;
        }
        count++;
    }

    cout << count << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    distinct(arr, n);


    return 0;
}
