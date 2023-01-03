#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for(int i=0; i<str.size(); i++)
    {
        if(i%2 == 0)
        {
            if(str[i] == 'z')
                str[i] = 'a';
            else
                str[i] = str[i]+1;
        }
    }

    cout << str << "\n";

    return 0;
}
