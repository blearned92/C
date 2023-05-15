#include <stdio.h>

void memoryAddress()
{

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    //the ampersand is to ask for the memory address of the variable
    printf("Age Memory Address: %p \n", &age);
    printf("GPA Memory Address: %p \n", &gpa);
    printf("Grade Memory Address: %p \n", &grade);

}
