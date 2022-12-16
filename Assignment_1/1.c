#include<stdio.h>


int main(){
    int a=5, b=13;
    //Write code here
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    //End of code
    printf("%d and %d" , a, b);

    return 0;
}
