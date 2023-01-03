#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, n1;

    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cin >> n1;
    vector<int>arr1(n1);
    for(int i=0; i<n1; i++)
        cin >> arr1[i];

    for(int i=0; i<n; i++)
        for(int j=0; j<n1; j++)
            if(arr[i] == arr1[j])
                cout << arr[i] << " ";


    cout << "\n";

    return 0;
}
