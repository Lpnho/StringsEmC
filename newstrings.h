#ifndef STRINGS_H
#define STRINGS_H
// Libs
#include <stdlib.h>
#include <stdio.h>
// Prototipos
char *replace(char *pointer, char change[], char changeTo[]);
char *getString(FILE *stdBuffer);
int stringLength(char *string);
int getAddress(char *pointer, char *change);
char *newString(char *string);
// Macros
#define prints(s) printf("%s\n", s)
#define printi(i) printf("%i\n", i)

#endif