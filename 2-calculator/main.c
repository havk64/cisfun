#include <stdio.h>
#include <stdlib.h>
#include "my_functions.h"
/* Main function of 2-calculator */
int main(int ac, char *av[])
{
    if( ac != 4 || *get_op_func(*av[2]) == (NULL)) return 1;
    printf("%d\n", (*get_op_func(*av[2]))(atoi(av[1]), atoi(av[3])));
    return 0;
}
