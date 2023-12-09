#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<long long int>arr(21);
    arr[1] = 1;
    arr[2] = 2;
    for(int i=3; i<=20; i++){
        arr[i] = arr[i-1]*4;
    }

    int y;
    cin >> y;

    for(int i=1; i<=20; i++){
        if(y==i){
            cout << arr[i] << "\n";
            break;
        }else{
            continue;
        }
    }
    return 0;
}
