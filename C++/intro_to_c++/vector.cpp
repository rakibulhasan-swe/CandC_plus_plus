// will use vector in replace for array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);

    for(int i=0; i<v.size(); i++)
        cin >> v[i];

    reverse(v.begin(),v.end());

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";

    return 0;
}
