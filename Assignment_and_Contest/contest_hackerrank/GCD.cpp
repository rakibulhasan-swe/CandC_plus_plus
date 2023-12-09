#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return GCD(b, a % b);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long x, y, z;
        cin >> x >> y >> z;
        long long powX = pow(x, z);
        long long powY = pow(y, z);
        long long val1 = powX + powY;
        long long val = max(x, y) - min(x, y);

        int res = GCD(val, val1);
        cout << res << "\n";

    }

    return 0;
}
