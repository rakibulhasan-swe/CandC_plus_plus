#include<stdio.h>

int main(){
    int t, max = 0, maxE = 0;
    int arr[20];
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d", &arr[i]);
    }

    // sorting
    for(int i=0; i<t-1; i++){
        for (int j=0; j<t-i-1; j++){
            if (arr[j] > arr[j + 1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<t-1; i++){
        if(arr[t-1]%2 == 0){
            if(arr[t-1] != arr[i]){
            int v = arr[t-1] + arr[i];
            if(v%2 == 0){
                if(v > maxE){
                maxE = v;
              }
            }
          }
        }
    }

    // finding biggest even numbers
    for(int i=0; i<t-1; i++){
        if(arr[t-1]%2 != 0){
            if(arr[t-1] != arr[i]){
            int v = arr[t-1] + arr[i];
            if(v%2 == 0){
                if(v > max){
                max = v;
                }
            }
          }
        }
    }

    int bigE = (maxE>max) ? maxE : max;
    printf("%d\n", bigE);



    return 0;
}
