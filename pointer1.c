// w.a.p to print  value of (pointer)addres./for use  estrix*.
#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%u\n", *ptr);
    printf("%d\n", age);
    printf("%d\n", *(&age));
    return 0;
}