// w.a.p tocheck vovel or not.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter alphabet\n");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("Vovel\n");
        break;
    case 'i':
        printf("Vovel\n");
        break;

    case 'o':
        printf("Vovel\n");
        break;
    case 'e':
        printf("Vovel\n");
        break;
    case 'u':
        printf("Vovel\n");
        break;

    default:
        printf("invalid vovel\n");
    }
    return 0;
}