// w.a.p to greatest of 3 number
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter a number\n");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3)
    {
        printf("n1 is greater\n");
    }
    else if (n2 > n1 && n2 > n3)
        ;
    {
        printf("n2 is greater\n");
    }

    {
        printf("n3 is greater\n");
    }
    return 0;
}