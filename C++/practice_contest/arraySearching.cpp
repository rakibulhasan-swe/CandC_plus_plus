// binary search
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    vector<int> v;
    v.resize(n);

    for(int i=0; i<v.size(); i++)
        cin >> v[i];

    int searchItem;
    cin >> searchItem;

    for(int i=0; i<v.size(); i++)
    {
        if(v[i] == searchItem)
        {
            cout << "Find in index number: " << i << "\n";
            flag = 1;
            break;
        }
    }

    if(flag!=1)
        cout << "Not found in the array." << "\n";


    return 0;
}
