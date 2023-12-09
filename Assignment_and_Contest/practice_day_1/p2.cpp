#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mult = 1;
    cin >> n;
    vector<int>arr;
    arr.resize(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++)
    {
        if(i%2 != 0)
            mult*=arr[i];
    }

    cout << mult << "\n";


    return 0;
}
