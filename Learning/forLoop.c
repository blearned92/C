#include <stdio.h>

void forLoop()
{
    printf("For Loop: ");
    for(int i=0; i<5; i++){
        printf("%d", i);
    }

    int luckyNumbers[] = {2, 4, 6, 8, 10};
    printf("\nFor Loop 2: ");
    for(int i=0; i<5; i++){
        printf("%d", luckyNumbers[i]);
    }
    printf("\n");
}
