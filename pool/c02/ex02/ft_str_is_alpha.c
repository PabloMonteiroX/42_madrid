/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pablo_monteiro@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:28:50 by pmonteir          #+#    #+#             */
/*   Updated: 2026/06/09 15:58:32 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	is_alpha = 1;
	i = 0;
	while (str[i] != '\0' && is_alpha)
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			is_alpha = 0;
		}
		i++;
	}
	return (is_alpha);
}
