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

    for(int i=0 ; i<t; i++){
        if(arr[i]%2 == 0){
            if(arr[i] > maxE){
                maxE = arr[i];
            }
        }
    }

    // finding biggest even numbers
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            if(arr[i] != arr[j]){
                int v = arr[i] + arr[j];
                if(v%2 == 0){
                    if(v > max){
                        max = v;
                    }
                }
            }
        }
    }

    int even = (maxE>max) ? maxE : max;

    printf("%d\n", even);


    return 0;
}
