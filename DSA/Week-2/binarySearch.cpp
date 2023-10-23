#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    // taking input for vector
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int start = 0, end = n-1;
    bool flag = false;

    // binary search
    while(start<=end){
        int mid = (start+end)/2;
        // cout << "start: " << start << " end: " << end << " mid: " << mid << "\n";
        if(k==arr[mid]){
            cout << "Found at index: " << mid << "\n";
            flag = true;
            break;
        }else if(arr[mid]>k){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }

    // if not founded
    if(!flag)
        cout << "Not Found!.\n";

    return 0;
}

/*

Time Complexity: O(log n), Space Complexity: O(n)

10 10
2 4 6 7 8 9 10 11 14 16

*/
