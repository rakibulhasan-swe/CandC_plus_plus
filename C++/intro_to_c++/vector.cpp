#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v= {2,5,1,9,7};
    reverse(v.begin(),v.end());

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << '\n';

    return 0;
}
