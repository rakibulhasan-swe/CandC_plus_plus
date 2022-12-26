#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s = "Rakibul Hasan";
    s.pop_back();
    s.erase(s.begin());
    cout << s << endl;

    for(int i=0; i<s.size(); i++)
    {
        s[i] = s[i] + 1;
    }

    cout << s << endl;

    return 0;
}
