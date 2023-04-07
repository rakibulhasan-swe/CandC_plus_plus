#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int X, Y;
        cin >> X >> Y;
        int i = 1;
        while (Y + i < X) {
            Y += i;
            i++;
        }
        cout << i << endl;
    }

    return 0;
}


