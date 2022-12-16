#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int t;
    scanf("%d", &t);

    while(t!=0){
        int flag = 0, count = 0;
        scanf("%s", string1);
        int length = strlen(string1);

        for(int i=0; i<length; i++){
            if(string1[i] != string1[length-i-1]){
                flag = 1;
                break;
               }
            }

        if (flag) {
            printf("Case #1: Not Palindrome\n");
        }
        else {
            if(length>7){
                for(int i=0; i<length; i++){
                    count++;
                }
                printf("Case #2: %c%d%c\n", string1[0], count-2, string1[length-1]);
            }else{
                printf("Case #3: %s\n", string1);
            }
        }
        t--;
    }


    return 0;
}
