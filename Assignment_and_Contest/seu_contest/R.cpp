#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[100000], s=0, r=0;
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<n; i++)
        s+=a[i];

    if(s%5 == 0)
        r = s/5;
    else
        r = s/5+1;

    cout << r << "\n";

    return 0;
}

