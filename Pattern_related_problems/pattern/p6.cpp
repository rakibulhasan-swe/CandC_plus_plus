#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    while(n!=m){
        if(n==24){
            n = 0;
        }else{
            cout << n << " ";
            n++;
        }
    }
    cout << n << endl;

    return 0;

}
