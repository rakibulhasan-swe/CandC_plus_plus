#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i=0; i<n; i++) cin >> v[i];

        bool flag = true;
        for(int i=1; i<n; i++){
            if(v[i-1] > v[i]) {
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

/* 
TC = O(tc*n)
SC = O(n)
*/