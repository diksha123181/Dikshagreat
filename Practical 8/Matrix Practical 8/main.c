#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[10][10];
  int m, n, i, j;
    printf("Enter a number of rows: ");
    scanf("%d", &m);
    printf("Enter a number of columns: ");
    scanf("%d", &n);
    printf("Enter a matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nMatrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
