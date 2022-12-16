#include<stdio.h>
#include<string.h>

void broken_keyboard(char str[], int len)
{
    for(int i=0; i<len; i++)
    {
        if(i%2 != 0)
        {
           printf("%c", str[i]);
           printf("%c", str[i]);
        }else{
            printf("%c", str[i]);
        }
    }

    printf("\n");
}

int main()
{
    char str[100];
    scanf("%s", str);
    int l = strlen(str);

    broken_keyboard(str, l);

    return 0;
}
