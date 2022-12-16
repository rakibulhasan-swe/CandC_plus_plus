#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20];
    int shift_number;

    scanf("%s", str);
    scanf("%d", &shift_number);

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        int numerical_value = (int) str[i];

        if (97 <= numerical_value + shift_number && numerical_value + shift_number <= 122)
        {
            str[i] = (char)numerical_value + shift_number;
        }
        else
        {
            int first_num = 97;
            int last_num = 122;
            int next_num = numerical_value + shift_number;
            str[i] = (char)first_num + (next_num - last_num) - 1;
        }
    }

    printf("%s\n", str);

    return 0;
}
