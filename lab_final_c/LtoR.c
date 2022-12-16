#include<stdio.h>

void primeNumbers(int low, int high)
{
    int flag, i;
    while (low <= high){
      flag = 0;
      if (low <= 1){
         printf("%d ", low);
         ++low;
         continue;
      }
      // if low is a non-prime number, flag will be 1
      for (i = 2; i <= low / 2; ++i) {
         if (low % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d ", low);

      ++low;
   }
}

int main()
{
    int t, l, r;
    scanf("%d", &t);

    while(t!=0)
    {
        scanf("%d %d", &l, &r);
        primeNumbers(l, r);
        printf("\n");
        t--;
    }



    return 0;
}
