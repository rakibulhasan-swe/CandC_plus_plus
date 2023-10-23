#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1;

    vector<int>arr1(n1);
    vector<int>arr2(n2);
    for(int i=0; i<n1; i++)
        cin >> arr1[i];

    cin >> n2;
    for(int i=0; i<n2; i++)
        cin >> arr2[i];


    vector<int>res;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i] == arr2[j]){
                res.push_back(arr1[i]);
            }
        }
    }

    // print result
    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";

    cout << "\n";


    return 0;
}
