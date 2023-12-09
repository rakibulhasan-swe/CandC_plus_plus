#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, count = 0;
    cin >> t;

    while(t--)
    {
        int sum = 0;
        cout << endl;
        cin >> n;
        int arr[n];

        for(int i=0; i<n; i++)
            cin >> arr[i];

        for(int i=0; i<n; i++)
            sum+=arr[i];

        cout << "Case " << ++count << ": " << sum << "\n";

    }
    return 0;
}
