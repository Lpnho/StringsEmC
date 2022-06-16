#include <stdio.h>
#include <stdlib.h>
#include "./newstrings.h"
// REPLACE
// REPLACEALL   (*)
// TOUPPERCASE  (*)
// TOLOWERCASE  (*)
// LENGTH       
// GETS

int main(void)
{
    char *string = getString(stdin);
    char *alterar = getString(stdin);
    char *palavra = getString(stdin);
    
    string = replace(string, alterar, palavra);
    prints(string);

    free(alterar);
    free(palavra);
    return 0;
}
