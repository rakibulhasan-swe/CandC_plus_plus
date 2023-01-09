#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    int l = n.size();

    cout << n[0] << l-2 << n[l-1] << "\n";

    return 0;
}



