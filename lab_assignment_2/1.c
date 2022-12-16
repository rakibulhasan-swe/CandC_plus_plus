#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int sum_of_num = 0;
    int count = 0;
    int positive = 1;

    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (count == 3)
        {
            count = 0;
            //positive = positive == 1 ?  0 : 1;
            if(positive == 1)
            {
                positive = 0;
            }else{
                positive = 1;
            }
        }

        //sum_of_num = positive == 1 ? sum_of_num + i : sum_of_num - i;
        if(positive == 1)
        {
            sum_of_num+=i;
        }else{
            sum_of_num-=i;
        }

        count++;
    }

    printf("%d\n", sum_of_num);

    return 0;
}
