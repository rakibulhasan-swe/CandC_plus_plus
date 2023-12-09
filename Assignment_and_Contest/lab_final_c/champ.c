#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char str[1000];
    char word[] = "champions";
    scanf("%s", str);

    int str_len = strlen(str);
    int word_len = strlen(word);
    int count = 0;

    for(int i = 0; i < str_len; i++)
    {
        for(int j = 0; j < word_len; j++)
        {

            if(tolower(str[i + j]) != word[j])
            {
                count = 0;
                break;
            }
            else
            {
                count++;
                if (count == word_len)
                {
                    printf("Yes\n");
                    return 0;
                }
            }
        }
    }

    printf("No\n");

    return 0;
}

