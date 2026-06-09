/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pablo_monteiro@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 16:30:08 by pmonteir          #+#    #+#             */
/*   Updated: 2026/06/09 16:37:26 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	i = 0;
	is_printable = 1;
	while (str[i] != '\0' && is_printable)
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			is_printable = 0;
		}
		i++;
	}
	return (is_printable);
}
