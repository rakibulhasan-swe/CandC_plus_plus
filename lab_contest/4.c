#include<stdio.h>

int main(){
    int n, marks[1000];

    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d ", &marks[i]);
    }

    int min = marks[1];
    for(int i=1; i<=n; i++){
        if(marks[i] > min){
            min = marks[i];
        }
    }

    for(int i=1; i<=n; i++){
        int diff = min - marks[i];
        printf("%d ", diff);
    }

    printf("\n");


   return 0;
}
