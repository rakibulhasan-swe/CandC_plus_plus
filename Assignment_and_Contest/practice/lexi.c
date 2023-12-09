#include<stdio.h>
#include<string.h>

int main(){
    char s1[50], s2[50];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    int i, length = strlen(s1)-1;

    // lowercase conversion
    for(i=0; i<length; i++){
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]+=32;
        }
        if(s2[i]>='A' && s2[i]<='Z'){
            s2[i]+=32;
        }
    }
    // comparing
    for(i=0; i<length; i++){
        if(s1[i]<s2[i]){
            puts(s1);
            puts(s2);
            return 0;
        }else if(s1[i]>s2[i]){
            puts(s2);
            puts(s1);
            return 0;
        }
    }

    puts(s1);


    return 0;
}
