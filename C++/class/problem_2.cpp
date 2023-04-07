#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, vote, cnt = 0;
        cin >> n >> vote;
        vector<int>a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++){
            if(a[i]>=vote)
                cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}

