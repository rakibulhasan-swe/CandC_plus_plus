#include<stdio.h>

int main(){
    int n, k, run[1000], out = 0;

    scanf("%d %d", &n, &k);
    for(int i=1; i<=n; i++){
        scanf("%d", &run[i]);
    }
    for(int i=1; i<=n; i++){
       if(run[i] < k)
        out++;
    }

    printf("%d \n", out);


    return 0;
}

