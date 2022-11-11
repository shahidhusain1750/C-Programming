// w.a.p to print n to 1
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int i = n;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}