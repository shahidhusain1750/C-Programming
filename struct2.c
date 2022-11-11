#include <stdio.h>
struct Student
{
    int roll;
    float cgpa;
};
int main()
{
    struct Student s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a roll & cgpa\n");
        scanf("%d%f", &s[i].roll, &s[i].cgpa);
    }
    printf("SID/cgpa\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student roll no is %d & cgpa is %f\n", s[i].roll, s[i].cgpa);
    }
    return 0;
}
