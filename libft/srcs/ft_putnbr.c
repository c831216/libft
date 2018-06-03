#include "libft.h"

void	ft_putnbr(int n)
{/*
	if(n >= 0 && n < 10)
	{
		ft_putchar(n + '0');
	}
	else if(n < 0)
	{	
		ft_putchar('-');
		ft_putchar(n*(-1));
	}
	else
	{	ft_putchar(n/10);
		ft_putchar(n%10);
	} 	
}*/

if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n >= 10)
			ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}
