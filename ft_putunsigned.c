
#include "printf.h"


int ft_putunsigned(unsigned int nbr)
{
    int x;

    x = 0;
    if (nbr >= 10)
    {
        ft_putunsigned(nbr / 10);

    }
    x = ft_putchar((nbr % 10) + '0');

    return x;
}
