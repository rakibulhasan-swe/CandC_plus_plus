#include<stdio.h>
#include<string.h>

void chracterPrint(int n)
{
    if(n==1)
    {
        printf("A");
    }else if(n==2){
        printf("B");
    }else if(n==3){
        printf("C");
    }else if(n==4){
        printf("D");
    }else if(n==5){
        printf("E");
    }else if(n==6){
        printf("F");
    }else if(n==7){
        printf("G");
    }else if(n==8){
        printf("H");
    }else if(n==9){
        printf("I");
    }
}

int main()
{
    int t, n, reverse = 0;
    scanf("%d", &t);


    while(t!=0)
    {
        scanf("%d", &n);
        while(n != 0)
        {
            reverse = n%10;
            chracterPrint(reverse);
            n /= 10;
        }
        printf("\n");

        t--;
    }

    return 0;
}
