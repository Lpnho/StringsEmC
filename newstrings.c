#include "./newstrings.h"
#include <stdio.h>
#include <stdlib.h>
int stringLength(char *string)
{
    register unsigned int i;
    for (i = 0; string[i] != '\0'; i++)
        ;
    return i;
}
char *getString(FILE *stdBuffer)
{
    if (!stdBuffer)
        return 0;
    char string[BUFSIZ], *pointer;

    fgets(string, BUFSIZ, stdBuffer);
    pointer = calloc(stringLength(string) + 1, sizeof(char));
    register unsigned int i = 0;
    do
    {
        pointer[i] = string[i];
        i++;
    } while (string[i] != '\0');
    return pointer;
}
int getAddress(char *pointer, char *change)
{
    if (!pointer || !change)
        return -1;
    int i = 0;
    int size = stringLength(change);
    for (register int cont = 0; cont < stringLength(pointer); cont++)
    {
        if (pointer[cont] == change[0])
        {
            i = cont;
            for (int c2 = 1; c2 < size; c2++)
            {
                i++;
                if (!(pointer[i] == change[c2]))
                {
                    i = 0;
                    c2 = size;
                }
            }
        }
        if (i)
            return cont;
    }

    return -1;
}
char *replace(char *pointer, char change[], char changeTo[])
{
    if (!pointer || !change || !changeTo || getAddress(pointer, change) == -1)
        return 0;
    register int i;
    int aux;
    char *backup = pointer;
    pointer = 0;
    pointer = calloc(stringLength(backup) + (stringLength(changeTo) - stringLength(change)), sizeof(char));
    for (i = 0; i < getAddress(backup, change); i++)
    {
        pointer[i] = backup[i];
    }
    aux = i + stringLength(change);
    for (register int cont = 0; cont < stringLength(changeTo); cont++)
    {
        pointer[i] = changeTo[cont];
        i++;
    }
    for (; aux < stringLength(backup); aux++)
    {
        pointer[i] = backup[aux];
        i++;
    }
    free(backup);
    return pointer;
}
char *newString(char *string)
{
    if (!string)
    {
        perror("Frase vazia!\n");
        return 0;
    }
    char *pointer = calloc(stringLength(string), sizeof(char));
    register int i = 0;
    do
    {
        pointer[i] = string[i];
        i++;
    } while (string[i] != '\0');
    return pointer;
}