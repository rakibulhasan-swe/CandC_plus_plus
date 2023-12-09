#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    bool flag = false;
    for(int i=1; i<n; i++){
        if(v[i] == v[i-1]) {
            flag = true;
            break;
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}

/* 
TC = O(nlogn)
SC = O(n)
*/