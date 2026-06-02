/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pablo_monteiro@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 13:36:41 by pmonteir          #+#    #+#             */
/*   Updated: 2026/06/02 13:55:57 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	num;

	i = 0;
	while (i <= 9)
	{
		num = '0' + i;
		write(1, &num, 1);
		i++;
	}
}
