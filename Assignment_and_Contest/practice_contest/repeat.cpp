#include <bits/stdc++.h>
using namespace std;


int maxRepeating(string str, int n){

   int count = 0;
   int maxC = 1;
   for (int i=0; i<n; i++){
      if (str[i] == str[i+1] && i < n-1 )
         maxC++;
      else{
         if (maxC > count){
            count = maxC;
         }
         maxC = 1;
      }
   }
   return count;
}
int main(){

    string string1;
    cin >> string1;

    int N = string1.size();

    cout << maxRepeating(string1, N) << endl;

   return 0;
}
