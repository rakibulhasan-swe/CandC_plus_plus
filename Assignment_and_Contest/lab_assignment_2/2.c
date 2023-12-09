#include <stdio.h>
#include <string.h>

void descending_string(char str[], int len)
{
    char temp;

    for(int i = 0; i < len-1; i++){
		for(int j = i+1; j < len; j++){
			if(str[i]< str[j]){
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
			}
		}
	}

	printf("%s\n", str);
}

int main ()
{
  char str[100];

   scanf("%s", str);
   int len = strlen(str);

   descending_string(str, len);

	return 0;
}
