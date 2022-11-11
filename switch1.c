// w.a.p to print 1 to 7 days in switch case
#include <stdio.h>
int main()
{
    int day;
    printf("Enter a day 1to7\n");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thirsday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;

    default:
        printf("Invalid day\n");
    }
    return 0;
}