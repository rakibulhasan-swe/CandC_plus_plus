#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000], x, n;

    cin >> n;

    for(int i=1; i<n; i++){
        cin >> x;
        arr[x] = 7;
    }

    for(int i=1; i<=n; i++){
        if(arr[i] != 7){
            cout << i << endl;
        }
    }


    return 0;
}
