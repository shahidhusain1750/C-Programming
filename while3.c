// write a program to print 1 to n
#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}