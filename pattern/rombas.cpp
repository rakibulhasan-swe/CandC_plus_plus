#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        // for space
        for(int k=1; k<=n-i; k++){
            cout << " ";
        }
        // for star
        for(int j=1; j<=n; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
