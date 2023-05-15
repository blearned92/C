#include <stdio.h>

void files()
{
    printf("%s", "---Files---\n");
    //file modes: r, w, a (read, write, append)

    FILE * writepointer = fopen("employees.txt", "w");
    fprintf(writepointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting"); //write to a file
    fclose(writepointer); //close out the file, remove from memory;

    FILE * appendpointer = fopen("employees.txt", "a");
    fprintf(appendpointer, "\nSara, Human Resources"); //write to a file
    fclose(appendpointer); //close out the file, remove from memory;

    char line[255];
    FILE * readpointer = fopen("employees.txt", "r");
    fgets(line, 255, readpointer);
    printf("%s", line);
    fgets(line, 255, readpointer);
    printf("%s", line);
    fgets(line, 255, readpointer);
    printf("%s", line);
    fgets(line, 255, readpointer);
    printf("%s", line);
    fclose(readpointer); //close out the file, remove from memory;
}
