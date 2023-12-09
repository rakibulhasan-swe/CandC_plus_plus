#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> q;
    while (q--){
        int l, r;
        cin >> l >> r;

        long long result = 1;
        for(int i=l; i<=r; i++) {
            result *= arr[i-1];
            if(result == 0)
                break;
            else
                continue;
        }

        cout << result << "\n";
    }

    return 0;
}
//https://www.hackerrank.com/contests/phitron-monthly-contestmarch-2023batch-02/challenges
