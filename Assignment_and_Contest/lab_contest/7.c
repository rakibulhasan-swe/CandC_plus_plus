#include<stdio.h>

int main(){
    int n, k, arr[1000];
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &k);


    if(k==0){
        for(int i=1; i<=n; i++){
            printf("%d ", arr[i]);
        }
    }else if(k<=n){
        int girl = k;
        int boy = k+1;
        for(int i=boy; i<=n; i++){
            printf("%d ", arr[i]);
        }
        for(int j=1; j<=girl; j++){
            printf("%d ", arr[j]);
        }
    }
    printf("\n");



    return 0;
}


