#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum = 0;
    cin >> n;
    vector<int>arr(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            sum+= arr[j]-arr[i];
        }
    }

    cout << sum << "\n";

    return 0;
}
