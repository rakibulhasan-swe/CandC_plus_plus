#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, weight, sum = 0;
    cout << "Enter the number of passengers: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> weight;
        sum += weight;
    }

    cout << "Total Weight: " << sum << endl;


    return 0;
}
