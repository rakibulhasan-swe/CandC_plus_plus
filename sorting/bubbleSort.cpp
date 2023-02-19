#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            count++;
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }

    cout << "After Sorting \n";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    cout << "\n" << count << "\n";



    return 0;
}
