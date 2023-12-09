#include<stdio.h>

int odd_even_sum(int arr[], int n)
{
    int odd = 0, even = 0, sum = 0;

    for(int i=1; i<=n; i++)
    {
        if(i%2 == 0 && arr[i]%2 == 0)
        {
            even += (i+arr[i]);
        }else if(i%2 == 1 && arr[i]%2 == 1){
            odd+= (i+arr[i]);
        }
    }

    sum = even+odd;

    if(sum!=0)
    {
        return sum;
    }else{
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = odd_even_sum(arr, n);

    printf("%d\n", sum);


    return 0;
}
