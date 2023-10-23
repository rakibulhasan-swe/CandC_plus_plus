#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)
        cin >> nums[i];

    int sum = 0;
    for(int i=0; i<n; i++)
        sum+=nums[i];

    cout << sum << "\n";


    return 0;
}
