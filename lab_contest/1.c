#include<stdio.h>

int main(){
    int t, s, a, b, c, missingNumber = 0;

    scanf("%d", &t);

    while(t!=0){
        scanf("%d %d %d %d", &s, &a, &b, &c);
        missingNumber = s -  (a+b+c);
        printf("%d \n", missingNumber);
        t--;
    }


    return 0;
}
