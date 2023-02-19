#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=1; i<n; i++){
        int idx = i;
        while(idx >= 1){
            if(arr[idx-1] > arr[idx]){
                swap(arr[idx], arr[idx-1]);
                idx--;
            }
            else
                break;
        }
    }
    cout << "After Sorting\n";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << "\n";


    return 0;
}
