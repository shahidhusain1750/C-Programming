// factorial of n number
#include <stdio.h>
int main()
{
    int n;
    int fact = 1;
    printf("Enter number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial is %d\n", fact);
    return 0;
}