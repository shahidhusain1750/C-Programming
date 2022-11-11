//array of structur
#include <stdio.h>
#include <string.h>
struct Student
{
    char Name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct Student cs1[100];
    strcpy(cs1[0].Name, "ShAHID");
    cs1[0].roll = 35;
    cs1[0].cgpa = 87.90;
    printf("Student name = %s\n", cs1[0].Name);
    printf("Student roll no = %d\n", cs1[0].roll);
    printf("Student cgpa = %f\n", cs1[0].cgpa);
    return 0;
}
