// w.a.p. to print multi dime array to take two size array by user an print it.
#include <stdio.h>
int main()
{
    int a[8][8];
    int m, n, i, j;
    printf("Enter a size\n");
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Elements array are\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}