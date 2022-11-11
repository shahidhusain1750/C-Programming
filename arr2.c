// w.a.p to print revers order array.
#include <stdio.h>
int main()
{
    int a[5];
    int n, i;
    printf("Enter size");
    scanf("%d", &n);
    printf("Enter elements");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements are\n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}