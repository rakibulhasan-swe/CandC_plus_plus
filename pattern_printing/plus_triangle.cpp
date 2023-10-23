#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int mid = (n+1)/2;
            if(mid == i || mid == j)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }


    return 0;
}
/*
n = 5

    *
    *
* * * * *
    *
    *
*/


