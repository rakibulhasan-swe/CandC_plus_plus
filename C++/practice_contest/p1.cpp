#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> arr;
    arr.resize(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++)
        sum+=arr[i];


    cout << sum << "\n";

    return 0;
}
