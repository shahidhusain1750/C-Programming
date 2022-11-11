// Initializing Structure
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
    struct Student ms = {"Shahid", 55, 88.9};
    printf("Student Name is %s\n", ms.Name);
    printf("Student rollNo. is %d\n", ms.roll);
    printf("Student cgpa is %f\n", ms.cgpa);
    return 0;
}
