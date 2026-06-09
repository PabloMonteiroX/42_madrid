/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pablo_monteiro@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 16:09:59 by pmonteir          #+#    #+#             */
/*   Updated: 2026/06/09 16:22:56 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lower;

	is_lower = 1;
	i = 0;
	while (str[i] != '\0' && is_lower)
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			is_lower = 0;
		}
		i++;
	}
	return (is_lower);
}
