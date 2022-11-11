// w.a.p to print sq of 10 number
#include <stdio.h>
int main()
{
    int i = 1;
    int sq = 0;
    while (i <= 10)
    {
        sq = i * i;
        i++;
        printf("The square is %d\n", sq);
    }
    return 0;
}