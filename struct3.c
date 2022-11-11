#include <stdio.h>
#include <string.h>
//Structure is user define data type
struct Student
{
    int roll;
    float cgpa;
    char Name[100];
};
int main()
{
    // declared
    struct Student s1;
    // initialize
    s1.roll = 34;
    s1.cgpa = 88.70;
    strcpy(s1.Name, "Shahid");
    // s1.Name = "Shahid";
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);
    printf("Student Name = %s\n", s1.Name);
    return 0;
}