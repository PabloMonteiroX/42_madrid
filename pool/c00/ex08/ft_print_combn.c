/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pablo_monteiro@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 09:07:17 by pmonteir          #+#    #+#             */
/*   Updated: 2026/06/03 11:13:44 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digits(int *digits, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = digits[i] + '0';
		write(1, &c, 1);
		i++;
	}
	if (digits[0] != 9 - (n - 1))
	{
		c = ',';
		write(1, &c, 1);
		c = ' ';
		write(1, &c, 1);
	}
}

void	ft_fill(int *digits, int position, int start, int n)
{
	int		i;

	if (position == n)
	{
		ft_print_digits(digits, n);
		return ;
	}
	i = start;
	while (i <= 10 - (n - position))
	{
		digits[position] = i;
		ft_fill(digits, position + 1, i + 1, n);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	digits[9];

	if (n >= 1 && n <= 9)
		ft_fill(digits, 0, 0, n);
}
