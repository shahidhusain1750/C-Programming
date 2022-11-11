// w.a.p to print table of n number
#include <stdio.h>
int main()
{
    int n;
    int table;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        table = 5 * i;
        printf("%d\n", i, table);
    }
    return 0;
}