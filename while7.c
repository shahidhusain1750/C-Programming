// // w.a.p to print sum of 10 number
#include <stdio.h>
int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum = sum + i;
        i++;
        printf("The sum is %d\n", sum);
    }
    return 0;
}
