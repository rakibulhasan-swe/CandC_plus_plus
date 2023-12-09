//https://codeforces.com/contest/1691/problem/A
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t, n;

    cin >> t;

    while(t!=0){
        cin >> n;
        int sum = 0;
        int arr[n];
        // array input
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        // checking
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }

        if(sum%2 == 0){
           cout << "0" << endl;
        }else{
            cout << "1" << endl;
        }

        t--;
    }


    return 0;
}
