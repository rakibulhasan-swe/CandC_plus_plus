#include<stdio.h>
#include<string.h>

int digits(char arr[], char n)
{
    int l = strlen(arr);
    for(int i=0; i<l; i++)
    {
        if(arr[i] == n)
        {
            return 0;
        }
    }

}

int main()
{
    char number[100];
    scanf("%s", number);

    if(digits(number, '1') == 0 && digits(number, '7') == 0 && digits(number, '9') == 0)
    {
        printf("Yes\n");
    }else
    {
        printf("No\n");
    }

    return 0;
}
