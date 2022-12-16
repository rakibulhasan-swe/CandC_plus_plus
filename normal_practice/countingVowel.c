#include<stdio.h>

int main(){
    char sen[10];
    int count = 0, i = 0;
    fgets(sen, sizeof(sen), stdin);

    while(sen[i] != '\0'){
        if(sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u'){
            count++;
        }
        i++;
    }

    printf("%d", count);



    return 0;
}
