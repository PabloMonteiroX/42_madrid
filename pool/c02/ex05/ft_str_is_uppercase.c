/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pablo_monteiro@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 16:26:26 by pmonteir          #+#    #+#             */
/*   Updated: 2026/06/09 16:28:10 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_upper;

	is_upper = 1;
	i = 0;
	while (str[i] != '\0' && is_upper)
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			is_upper = 0;
		}
		i++;
	}
	return (is_upper);
}
