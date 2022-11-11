// w.a.p to check vovel
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet\n");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u')
    {
        printf("vovel\n");
    }
    else
    {
        printf("Invalid vovel\n");
    }
    return 0;
}