#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[20], temp;
    int i, j, len;
    printf("Input String: ");
    gets(str);
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    printf("\nSame string in ascending order: %s", str);
    getch();
    printf("\n");

    return 0;
}

