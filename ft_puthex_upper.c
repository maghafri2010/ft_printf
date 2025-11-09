
#include "printf.h"

int ft_puthex_upper(size_t nbr)
{

    if (nbr == 0)
    {
        write(1, "0", 1);
        return 1;
    }
    char *base = "0123456789ABCDEF";
    int count = 0;
    char digit[32];
    int i = 0;


    
    while (nbr > 0)
    {
        digit[i++] = base[nbr % 16];
        nbr /= 16;
    }
    i--;
    while (i >= 0)
    {
        write(1, &digit[i], 1);
        count++;
        i--;
    }
    

    return count;

}