#include <stdio.h>

int main() {

  int r, c, i, j;
  scanf("%d %d", &r, &c);
  int a[r][c], b[r][c], sum[r][c];


  printf("\nEnter elements of 1st matrix:\n");
  for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++){
          scanf("%d", &a[i][j]);
        }
    }

   printf("Enter elements of 2nd matrix:\n");
   for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++){
          scanf("%d", &b[i][j]);
        }
    }

  // adding two matrices
   for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++){
          sum[i][j] = a[i][j] + b[i][j];
        }
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++) {
          printf("%d ", sum[i][j]);
          if (j == c - 1) {
            printf("\n");
          }
        }
    }

  return 0;
}
