#include<stdio.h>

int main(){
    int n, a, time = 0;
    char c;

    scanf("%d", &n);

    while(n!=0){
        scanf("%d%c", &a, &c);
        if(a<60){
           a = 60 - a;
           time += ((a*1)+(40)+(60));
           printf("%d minutes\n", time);
           time = 0;

        }else if(a < 80){
            a = 80 - a;
            time+= ((a*2)+(60));
            printf("%d minutes\n", time);
            time = 0;

        }else if(a>=80){
            a = 100 - a;
            time+= (a*3);
            printf("%d minutes\n", time);
            time = 0;
        }
        n--;
    }



   return 0;
}

