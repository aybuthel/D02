#include <stdio.h>
#include <stdlib.h>

int ft_putnbr(int nbr)
{	
	char c;
	if (nbr<0)
	{
		nbr=-nbr;
		ft_putchar('_')
	}
	if (nbr<10)
		ft_putchar(nbr +'0')
			ft_putnbr(nbr%10)
}
