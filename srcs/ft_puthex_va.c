#include "../includes/ft_printf.h"

int    ft_puthex_va(va_list *ap, char spec)
{
    unsigned int 	n;
    char			*base;

    n = va_arg(*ap, unsigned int);
    if (spec == 'X')
        base = "0123456789ABCDEF";
    else
        base = "0123456789abcdef";
	return (ft_putunbr_base(n, base));
}