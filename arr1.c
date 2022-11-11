//w.a.p to print array size an element to order.
#include <stdio.h>
int main()
{
    int a[20];
    int n, i;
    printf("Enter size");
    scanf("%d", &n);
    printf("Enter elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}