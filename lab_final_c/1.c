#include <stdio.h>

int main()
{

    int i, j, rows, k = 0;

    scanf ("%d", &rows);

    for (i=1; i<=rows; i++)
    {
        for (j=1; j<=rows-i; j++)
        {
            printf (" ");
        }
        for (k=1; k<=(2 * i - 1); k++)
        {
            if(i%2 == 0)
            {
                printf ("*");
            }
            else
            {
                printf ("^");
            }
        }
        printf ("\n");
    }

    return 0;
}
