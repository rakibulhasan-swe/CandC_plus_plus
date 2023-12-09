#include<stdio.h>

void incrementCount(int *count)
{
  *count=*count+1;
}
int main()
{
  int count=0;
  incrementCount(&count);
  printf("Pass By Value \n");
  printf("Count: %d", count);

  return 0;
}
