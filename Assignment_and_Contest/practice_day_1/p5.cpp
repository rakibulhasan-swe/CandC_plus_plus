#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, n1;
    bool unique = true;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cin >> n1;
    vector<int>arr1(n1);
    for(int i=0; i<n1; i++)
        cin >> arr1[i];

    // array sorting
    sort(arr.begin(), arr.end());

    // printing the first sorted value
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    // searching for unique values in the second array
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr1[i] == arr[j])
            {
                unique = false;
                break;
            }
            else
            {
                unique = true;
            }
        }
        if(unique)
        {
            cout << arr1[i] << " ";
        }
    }

    cout << "\n";


    return 0;
}
