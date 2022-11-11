// w.a.p to print Accept of 3 sub(PCM) & print avg of it
// check which grade student pass
#include <stdio.h>
int main()
{
    int phy, chem, math;
    float avg;
    printf("Enter a pcm marks\n");
    scanf("%d%d%d", &phy, &chem, &math);
    avg = phy + chem + math / 3;
    printf("avg is = %f\n", avg);
    if (avg > 90)
    {
        printf("A grade\n");
    }
    else if (avg > 75)
    {
        printf("B grade\n");
    }
    else if (avg > 55)
    {
        printf("C grade\n");
    }
    else if (avg > 35)
    {
        printf("D grade\n");
    }
    else
    {
        printf("Failed\n");
    }
    return 0;
}