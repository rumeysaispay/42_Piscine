/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rispay-s <rispay-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:41:44 by rispay-s          #+#    #+#             */
/*   Updated: 2024/07/08 17:03:01 by rispay-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	ilkiki;
	int	soniki;

	ilkiki = 0;
	while (ilkiki <= 98)
	{
		soniki = ilkiki + 1;
		while (soniki <= 99)
		{
			ft_putchar('0' + ilkiki / 10);
			ft_putchar('0' + ilkiki % 10);
			ft_putchar(' ');
			ft_putchar('0' + soniki / 10);
			ft_putchar('0' + soniki % 10);
			if (!(ilkiki == 98 && soniki == 99))
				ft_putchar(',');
			ft_putchar(' ');
			soniki++;
		}
		ilkiki++;
	}
}
