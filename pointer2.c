// w.a.p to print address of values.
#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    // address of values
    //  printf("%p\n", &age);
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%d\n", &ptr);

    return 0;
}