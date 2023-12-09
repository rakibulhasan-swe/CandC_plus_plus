#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d, w, r;
    cin >> a >> b >> c >> d;

    r = a*a + b*b;
    w = c*c + d*d;

    if(r<w)
        cout << "Russo\n";
    else if(r==w)
        cout << "Empate\n";
    else
        cout << "Wil\n";

    return 0;
}
