#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    // taking input for vector
    for(int i=0; i<n; i++)
        cin >> arr[i];

    // array sort
    sort(arr.begin(), arr.end());


    int q;
    cin >> q;

    while(q--){
        int k;
        cin >> k;

        int start = 0, end = n-1;
        bool flag = false;

        // binary search
        while(start<=end){
            int mid = (start+end)/2;
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
            cout << "Not Found!\n";
    }


    return 0;
}

/*

Time Complexity: O((n*q log n), Space Complexity: O(n)

5
6 3 2 1 8

4
1 - YES
2 - YES
5 - NO
8 - YES

*/

