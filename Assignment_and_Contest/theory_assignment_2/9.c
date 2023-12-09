#include <stdio.h>

int main()
{

  int a[10][10], transpose[10][10], r = 3, c = 3;

  printf("Enter Values: \n");
  for (int i=0; i<r; ++i)
  {
      for (int j=0; j<c; ++j)
        {
            scanf("%d", &a[i][j]);
        }
  }

  // printing the matrix
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  {
      for (int j = 0; j < c; ++j)
      {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
      }
  }

  // transpose computing
  for (int i = 0; i < r; ++i)
  {
      for (int j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
  }

  // transpose value printing
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  {
     for (int j = 0; j < r; ++j)
        {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
            printf("\n");
        }
  }


  return 0;
}
