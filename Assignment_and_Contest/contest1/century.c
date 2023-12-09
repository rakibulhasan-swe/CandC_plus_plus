#include<stdio.h>

int main(){
    int t, n;
    scanf("%d", &t);

    while(t!=0){
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        //check
        int max = arr[0];
        for(int j=0; j<n; j++){
            if(arr[j] > max){
                max = arr[j];
            }
        }
        printf("%d\n", max);

        t--;
    }


    return 0;
}
