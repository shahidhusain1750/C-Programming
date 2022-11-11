// w.a.p to print cube of 10 number
#include <stdio.h>
int main()
{
    int i = 1;
    int cube = 0;
    while (i <= 10)
    {
        cube = i * i * i;
        i++;
    }
    printf("The cube is %d\n", cube);
    return 0;
}