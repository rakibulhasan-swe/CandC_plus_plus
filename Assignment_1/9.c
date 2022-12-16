#include<stdio.h>


int main(){
    int n;
    scanf("%d", &n);

    printf("The factors of 39 are: ");
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            if(i == n){
                printf("%d.", i);
            }else{
                printf("%d, ", i);
            }
        }
    }
    printf("\n");


    return 0;
}
