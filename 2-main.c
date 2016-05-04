#include <unistd.h>
/* Print char, hehe */
int print_char(char c)
{
    return (write(1, &c, 1));
}

/* I hope this is a valid comment */
int main(void)
{
    int a[5] = { 0, 1, 2, 4, 1 };
    int b[5] = { 1, 6, 2, 2, 8 };
    int i;

    i = 4;
    while (i>=0) /* while theres number in arrays*/
    {
	print_char(a[i] + b[i]+'0'); /* prints the sum of if */
	i--;
    }
    print_char('\n');
    return (0);
}
