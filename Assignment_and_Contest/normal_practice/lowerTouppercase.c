#include<stdio.h>

int main(){
    char lower[1000];
    fgets(lower, sizeof(lower), stdin);

    for(int i=0; lower[i]!='\0'; i++){
        if(lower[i]>='a' && lower[i]<='z'){
            lower[i]-=32;
        }
    }
    puts(lower);

    return 0;
}
