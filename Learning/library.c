#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}

void sayHi(char name[], int age)
{
    printf("Hello %s, you are %d\n", name, age);
}

int cubed(int num1)
{
    int returnValue = num1 * num1 * num1;
    return returnValue;
}

