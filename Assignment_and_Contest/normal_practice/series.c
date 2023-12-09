#include<stdio.h>

int main(){
   int n = 15, series = 1;
   int arr[n];
   arr[0] = series;

   for(int i=1; i<n; i++){
     series *=2;
     arr[i] = series;
   }

   for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
   }
   printf("\n");


    return 0;
}
