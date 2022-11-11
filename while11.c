// w.a.p to print 1 to n sq
#include <stdio.h>
int main()
{
    int i = 1;
    int sq = 0;
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (i <= n)
    {
        sq = i * i;
        i++;
    }
    printf("The square is %d\n", sq);
    return 0;
}