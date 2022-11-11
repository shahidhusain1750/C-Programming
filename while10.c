// w.a.p to print sum of squar 10 number
#include <stdio.h>
int main()
{
    int i = 1, sum = 0, sq = 0;
    while (i <= 10)
    {
        sq = i * i;
        sum = sum + sq;
        i++;
    }
    printf("The sum of square is %d\n", sum);
    return 0;
}