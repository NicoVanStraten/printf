#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char			*str;
	char			*str2;
	int				nb;
	unsigned int	unb;

	str = "this works";
	str2 = ", it works very good";
	nb = 123456;
	unb = -123;
	
	ft_printf("\n");
	ft_printf("|---------------------------------------------\n");
	ft_printf("|test number: %d \n", nb);
		printf("|real number: %d \n",nb);
	ft_printf("|---------------------------------------------\n");
	ft_printf("|test string: %s %s\n", str, str2);
		printf("|real string: %s %s\n", str, str2);
	ft_printf("|---------------------------------------------\n");
	ft_printf("|test char:%c %c %c \n", '0', 0, '1');
	   printf("|real char:%c %c %c \n", '0', 0, '1');
	ft_printf("|----------------------------------------------\n");
	ft_printf("|test char: %c %c %c \n", '1', '5', '3');
		printf("|real char: %c %c %c \n", '1', '2', '3');
	ft_printf("|----------------------------------------------\n");
	ft_printf("|test char: %c %c %c \n", '2', '1', 0);
		printf("|real char: %c %c %c \n", '2', '1', 0);
	ft_printf("|----------------------------------------------\n");
	ft_printf("|test interger: %i \n", nb);
		printf("|real interger: %i \n", nb);
	ft_printf("|----------------------------------------------\n");	
	ft_printf("|test unsigend number: %u \n", unb);
		printf("|real unsigend number: %u \n", unb);
	ft_printf("|----------------------------------------------\n");	
	ft_printf("|test number: %% \n");
		printf("|real number: %% \n");
	ft_printf("|----------------------------------------------\n");
	ft_printf("\n");

    ft_printf("%d", 9);
}
