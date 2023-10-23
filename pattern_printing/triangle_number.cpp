#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=n; j>=i; j--){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
n = 4
4
4 3
4 3 2
4 3 2 1
*/

