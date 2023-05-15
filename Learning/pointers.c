#include <stdio.h>

void pointers()
{
    int age = 30;
    int * pAge = &age; //asterisk and p naming convention for pointer storing
    double gpa = 3.7;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory address: %p\n", pAge);
    printf("Dereferenced age pointer %d\n", *pAge); //derefferences, no longer a pointer, now what was stored at the pointer
}
