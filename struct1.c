#include <stdio.h>
struct Student
{
    int roll;
    float percentage;
};
int main()
{
    struct Student s1;
    printf("Enter a student is & percentage\n");
    scanf("%d%f", &s1.roll, &s1.percentage);

    printf("Student roll is %d & percentage is %f\n", s1.roll, s1.percentage);
    return 0;
}
