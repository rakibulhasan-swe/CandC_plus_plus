#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        float x, y;
        float r1, r2, pi = 3.14159;
        cin >> x >> y;
        r1 = x/2;
        r2 = y/2;

        float sizeX = pi*r1*r1;
        float sizeY = pi*r2*r2;

        if(sizeX>sizeY+sizeY)
            cout << "NO\n";
        else
            cout << "YES\n";

    }

    return 0;
}
