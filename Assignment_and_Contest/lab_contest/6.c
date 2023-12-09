#include<stdio.h>

int main(){
    int t, i;
    long long int n;
    scanf("%d", &t);

    while(t!=0){
        int prime = 0;
        scanf("%lld", &n);
        if (n == 1){
            prime = 1;
        }
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0){
                prime = 1;
                break;
           }
        }
        if(prime == 0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }


        t--;
    }

    return 0;
}
