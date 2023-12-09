#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> v(n);

    for(int i=0; i<n; i++) {
        ll x; cin >> x;
        if(i == 0) v[i] = x;
        else v[i] = v[i-1]+x;
    };

    for(int i=n-1; i>=0; i--) cout << v[i] << " ";
    cout << "\n";
    

    return 0;
}

/* 
TC = O(n)
SC = O(n)
*/