#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        double val = sqrt(n);
        cout << round(val) << "\n";
    }

    return 0;
}

