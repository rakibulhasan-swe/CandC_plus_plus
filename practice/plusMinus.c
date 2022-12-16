#include<stdio.h>

int main(){
    int t, plus = 0, minus = 0, max_plus = 0, max_minus = 0;
    scanf("%d", &t);
    char arr[t];

    scanf("%s", arr);
    if(arr[t-1] == '+' ){
        arr[t] = '-';
    }else if(arr[t-1] == '-'){
        arr[t] = '+';
    }

    for (int i = 0; i <= t; i++)
    {
        if (arr[i] == '+')
        {
            plus++;
            max_minus = (max_minus < minus) ? minus : max_minus;
            minus = 0;
        }

        if (arr[i] == '-')
        {
            minus++;
            max_plus = (max_plus < plus) ? plus : max_plus;
            plus = 0;
        }
    }

    int big;
    big = (max_plus < max_minus) ? max_minus : max_plus;

    printf("%d", big);


    return 0;
}
