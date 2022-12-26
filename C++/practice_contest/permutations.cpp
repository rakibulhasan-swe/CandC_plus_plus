#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    string str = "";
    cin >> n;

    if(n<=3 && n>1)
    {
        cout << "NO SOLUTION" << endl;
    }

    for(long long int i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            cout << i << " ";
        }
        else
        {
            str+= to_string(i) + " ";
        }
    }


    cout << str << endl;

    return 0;
}
