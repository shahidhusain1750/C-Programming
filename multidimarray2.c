// w.a.p to print take element from user to print multidimensnal arry by loops.'[]
#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j;
    printf("Enter a three elements in array\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Elements array are\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}