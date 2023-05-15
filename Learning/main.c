#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include "calculator.h"
#include "switch.h"
#include "struct.h"
#include "whileLoop.h"
#include "forLoop.h"
#include "2darray.h"
#include "memoryAddress.h"
#include "pointers.h"
#include "variables.h"

int main()
{
    //functions
    sayHi("Brandon", 31);
    sayHi("Alex", 13);
    sayHi("Iroh", 1);
    printf("%d\n", cubed(3));
    printf("%d\n", max(4, 10, 3));

    //structures
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Charlie");
    strcpy(student1.major, "Computer Science");
    printf("%s\n", student1.name);

    //variables();
    //arrays();
    //twoDArray();
    //memoryAddress();
    //pointers();
    //switchCase('A');
    files();
    //whileLoop();
    //forLoop();
    //calculate();

    return 0;
}




