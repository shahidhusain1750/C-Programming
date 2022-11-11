// w.a.p to print add  two matrix 3x3 .
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int b[3][3] = {{1, 2, 3}, {1, 2, 4}, {1, 2, 3}};
    int c[3][3];
    int i, j;
    printf("Elements are matrix form\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}