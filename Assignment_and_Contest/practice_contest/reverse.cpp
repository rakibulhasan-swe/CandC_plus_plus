#include<bits/stdc++.h>
using namespace std;

void string_reverse(int l1, int r1, string s)
{
    int len = s.size();
    int l, r;
    l = l1-1;
    r = r1-1;

    for(int i=0; i<len; i++)
    {
        if(i==l)
        {
            for(int j=r; j>=l; j--)
            {
                cout << s[j];
            }
            i = r;
        }
        else
        {
            cout << s[i];
        }
    }

    cout << endl;
}

int main()
{
    int l, r;
    cin >> l >> r;
    string s;
    cin >> s;

    string_reverse(l, r, s);

    return 0;
}
