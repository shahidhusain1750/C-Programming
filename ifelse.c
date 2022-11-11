// w.a.p to check given number is vovel or not.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter vovel Alphabet\n");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u')
    {
        printf("Vovel\n");
    }
    else
    {
        printf("Invalid vovel");
    }
    return 0;
}