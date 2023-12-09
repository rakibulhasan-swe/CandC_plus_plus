#include<stdio.h>

int main(){
    int row, k=0;
    scanf("%d", &row);

    for(int i=1; i<=row; i++){
        for(int j=1; j<=row; j++){
            if(i==1 || i==row || j==1 || j==row){
                if(i==row){
                    printf("%d", i);
                }else{
                    if(j==1){
                        k = k+1;
                        printf("%d", k);
                    }else{
                        printf("%d", j);
                    }
                }
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
