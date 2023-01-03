#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    bool flag = false;
    cin >> n >> k;
    vector<int>arr(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int mid = (low+high)/2;
        cout << "Mid = " << mid << "\n";
        if(arr[mid] == k)
        {
            cout << "YES " << mid << "\n";
            flag = true;
            break;
        }
        if(arr[mid] < k)
        {
            low = mid+1;
        }
        if(arr[mid] > k)
        {
            high = mid - 1;
        }
    }

    if(!flag)
    {
        cout << "NO" << "\n";
    }


    return 0;
}

/*
test case

10 2
12 21 23 34 2 3 12 20 10 1

10 211
12 21 23 34 2 3 12 20 10 1

*/
