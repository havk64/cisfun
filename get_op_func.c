#include "my_functions.h"
#define NULL (void*)0
/* Function to define the control flow */
int (*get_op_func(char c))(int, int)
{
    int i;
    char operator[5] = "+-*/%";
    int (*array[5])(int, int) = { op_add, op_sub, op_mul, op_div, op_mod };
    for(i = 0; i < 5; i++) {
	if(c == operator[i]) return array[i];
    }
    return NULL;
}


