#include<stdio.h>

int main(){
    long long int n;
    int sum = 0;
    scanf("%lld", &n);

    while(n!=0){
        sum = sum + (n % 10);
        n = n / 10;
    }
    printf("%d\n", sum);


    return 0;
}
