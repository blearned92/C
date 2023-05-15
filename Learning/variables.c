#include <stdio.h>

void variables()
{
    int age = 31;
    double gpa = 3.7; //there are also floats
    char grade; //use single quotes
    char name[] = "Brandon"; //array brackets and double quotes to store multiple chars

    printf("My name is %s!\n", name);
    printf("I am %d years old!\n", age);
    printf("My GPA is %f!\n", gpa);
    printf("%s %d %f \n", "string" ,500, 500.12345); //format specifiers
    printf("%f\n", 5 + 4.5);
    printf("%f\n", pow(2, 3));
    printf("%f\n", sqrt(36));
    printf("%f\n", ceil(36.456));
    printf("%f\n", floor(36.456));

    const int NUM = 5; //const works same as in javascript. naming conventions is all caps
    printf("%d\n", NUM);

    //num = 8; commented out cause it would throw an error

    /*
    printf("Please enter your age:");
    scanf("%d", &age); //<-&age is a pointer
    printf("You are %d years old \n", age);

    printf("Please enter your gpa:");
    scanf("%lf", &gpa); //<-&gpa is a pointer
    printf("Your gpa is %f \n", gpa);

    printf("Please enter your grade:");
    scanf("%c", &grade); //<-&grade is a pointer
    scanf("%c", &grade); //<-&grade is a pointer
    printf("Your grade is %c \n", grade);

    char name[20];
    printf("Please enter your name:");
    fgets(name, 20, stdin); //<-&grade is a pointer
    printf("Your name is %s", name);
    */
}
