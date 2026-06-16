/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pablo_monteiro@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:32:52 by pmonteir          #+#    #+#             */
/*   Updated: 2026/06/16 11:06:28 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_alnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

static char	ft_to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_word_start;

	i = 0;
	is_word_start = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alnum(str[i]) == 1)
		{
			if (is_word_start == 1)
				str[i] = ft_to_upper(str[i]);
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			is_word_start = 0;
		}
		else
		{
			is_word_start = 1;
		}
		i++;
	}
	return (str);
}
