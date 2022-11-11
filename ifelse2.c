// w.a.p to print positive negative number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("Negative\n");
    }
    return 0;
}