#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    char toss[100];

    while(t!=0){
        fgets(toss, sizeof(toss), stdin);
        puts(toss);
        t--;
    }



    return 0;
}
