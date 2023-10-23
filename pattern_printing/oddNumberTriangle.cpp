#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << 2*j-1 << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
n = 4
1
1 3
1 3 5
1 3 5 7
*/

