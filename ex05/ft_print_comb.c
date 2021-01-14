/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:57:48 by lmaujean          #+#    #+#             */
/*   Updated: 2021/01/14 13:57:52 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void if_print_comb(void)
{
	char A;
	char B;
	char C;
	
	
	A = '0';

	while (A <= '7')
	{
		
		
			B = A + 1;
			while (B <= '9')
			{
				
				
					C = B + 1;
					while (C <= '9')
					{	
						
						ft_putchar(A);
						ft_putchar(B);
						ft_putchar(C);
						if (A != '7')
						{
						ft_putchar(',');
						ft_putchar(' ');
						}
						C++;

					}	
					B++;
			}
			A++;
	}
}

int main()
{
	if_print_comb();
	return (0);
}