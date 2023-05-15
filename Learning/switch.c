#import <stdio.h>
#include <stdlib.h>

void switchCase(char grade)
{
    switch(grade){
        case 'A' :
            printf("You did great!\n");
            break;
        case 'B' :
            printf("You did okay!\n");
            break;
        case 'C' :
            printf("You did average!\n");
            break;
        case 'D' :
            printf("You underperformed!\n");
            break;
        case 'F' :
            printf("You failed!\n");
            break;
        default:
            printf("Invalid Grade!\n");
            break;
    }

}
