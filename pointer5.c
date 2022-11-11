// w.a.p to a function to calculate the sum, product,average.
// of 2 number print that average in the main function.
#include <stdio.h>
void doWork(int a, int b, int *sum, int *prod, int *avg);
int main()
{
    int a = 3;
    int b = 5;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);
    
    printf("sum = %d\n prod = %d\n avg = %d\n", sum, prod, avg);
    return 0;
}
void doWork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}