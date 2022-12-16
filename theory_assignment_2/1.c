#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    scanf("%s", arr);
    int l = strlen(arr);

    for(int i=0; i<l; i++)
    {
        if(arr[i]>='a' && arr[i]<='z'){
            arr[i] -= 32;
        }else{
            arr[i] += 32;
        }
    }
    puts(arr);


    return 0;
}
