#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        // Sort the array ascending order
        sort(a.begin(), a.end());
        int max_diff = abs(a[0]-a[n-1]);
        for (int i=1; i<n; i++) {
            max_diff += abs(a[i]-a[n-i-1]);
        }

        cout << max_diff << "\n";
    }

    return 0;
}
