#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    bool flag = false;
    cin >> n >> target;
    vector<int>arr(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];


    for(int i=0; i<n; i++){
        if(arr[i] == target){
            cout << "Found at index: " << i << "\n";
            flag = true;
            break;
        }
    }

    if(!flag)
        cout << "Not Found!.\n";


    return 0;
}

/*

Time Complexity: O(n), Space Complexity: O(n)

10 13
2 4 6 7 8 9 10 11 14 16

*/
