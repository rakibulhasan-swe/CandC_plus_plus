#include<bits/stdc++.h>
using namespace std;

void searchRange(vector<int>& nums, int target) {
    vector<int>ans(2);
    int start = 0, end = nums.size()-1, first_idx = -1;

    while(start<=end){
        int mid = start+(start-end)/2;
        if(nums[mid] == target){
            first_idx = mid;
            end = mid+1;
        }else if(target>nums[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    ans[0] = first_idx;

    start = 0, end = nums.size()-1;
    int last_idx = -1;

    while(start<=end){
        int mid = start+(start-end)/2;
        if(nums[mid] == target){
            last_idx = mid;
            start = mid+1;
        }else if(target>nums[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    ans[1] = last_idx;

    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";

    cout << "\n";
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    int target;
    cin >> target;

    searchRange(arr, target);


    return 0;
}
