#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, ck = 0;

    cin >> n;
    ck = (n*(n+1))/2;
    cout << ck-(n-1) << "\n";

}
