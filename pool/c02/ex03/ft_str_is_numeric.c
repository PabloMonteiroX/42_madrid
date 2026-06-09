/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pablo_monteiro@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:59:19 by pmonteir          #+#    #+#             */
/*   Updated: 2026/06/09 16:08:37 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;

	i = 0;
	is_numeric = 1;
	while (str[i] != '\0' && is_numeric)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			is_numeric = 0;
		}
		i++;
	}
	return (is_numeric);
}
