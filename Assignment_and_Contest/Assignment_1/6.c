#include<stdio.h>

int main(){
    int fNumber, sNumber;

    printf("Enter first number: ");
    scanf("%d", &fNumber);
    printf("Enter second number: ");
    scanf("%d", &sNumber);

    if(fNumber % sNumber == 0){
        printf("The first number is divisible by the second number.\n");
    }else if(sNumber % fNumber == 0){
        printf("The second number is divisible by the first number.\n");
    }else{
        printf("None of them are divisible by the other.\n");
    }



    return 0;
}
