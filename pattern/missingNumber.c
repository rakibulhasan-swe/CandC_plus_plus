#include<stdio.h>

int main(){
    int arr[1000], x, n;

    scanf("%d", &n);

    for(int i=1; i<n; i++){
        scanf("%d ", &x);
        arr[x] = 7;
    }

    for(int i=1; i<=n; i++){
        if(arr[i] != 7){
            printf("%d", i);
        }
    }


    return 0;
}
