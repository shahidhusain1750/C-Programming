// w.a.p to store data 3 student.
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
    struct Student s1;
    // char s1.Name = "Shahid";
    strcpy(s1.Name, "Shahid");
    s1.roll = 34;
    s1.cgpa = 87.88;
    printf("Student Name = %s\n", s1.Name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);

    struct Student s2;
    strcpy(s2.Name, "Mohammed");
    s2.roll = 38;
    s2.cgpa = 95.78;
    printf("Student Name  = %s\n", s2.Name);
    printf("Student roll = %d\n", s2.roll);
    printf("Student cgpa = %f\n", s2.cgpa);

    struct Student s3;
    strcpy(s3.Name, "Raza");
    s3.roll = 55;
    s3.cgpa = 99.90;
    printf("Student Name = %s\n", s3.Name);
    printf("Student roll = %d\n", s3.roll);
    printf("Student cgpa = %f\n", s3.cgpa);
    return 0;
}