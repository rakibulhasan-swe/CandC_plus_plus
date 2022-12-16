#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int CountUniqueCharacters(char* str){
    int count = 0;

    for (int i=0; i<strlen(str); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }

         if(!appears){
             count++;
         }
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);

    int res = CountUniqueCharacters(str);
    printf("%d\n", res);

    return 0;
}
