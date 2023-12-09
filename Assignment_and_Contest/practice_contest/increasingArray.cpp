#include<bits/stdc++.h>
using namespace std;

int diff1(int a, int b)
{
    int maxi = max(a, b);
    int mini = min(a, b);

    int res = maxi - mini;

    return res;
}

void diff(int arr[], int n)
{
    int count = 0, res = 0;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
           res = diff1(arr[i], arr[i+1]);
           count+= res;
           arr[i+1] = arr[i];
        }

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

    diff(arr, n);

    return 0;
}
