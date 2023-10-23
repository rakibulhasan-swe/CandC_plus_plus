#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)
        cin >> nums[i];

    int res = 1;
    for(int i=0; i<n; i++){
        if(i%2 == 1)
            res*=nums[i];
    }

    cout << res << "\n";

    return 0;
}
