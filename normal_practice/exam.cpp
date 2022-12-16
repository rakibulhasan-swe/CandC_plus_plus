#include<bits/stdc++.h>
using namespace std;

int main(){
   int n, series = 1;
   cin >> n;
   int arr[n];

   arr[0] = series;
   for(int i=1; i<n; i++){
     series *=2;
     arr[i] = series;
   }

   for(int i=0; i<n; i++){
    cout << arr[i] << " ";
   }
   cout << endl;
}

