/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pablo_monteiro@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 20:03:30 by pmonteir          #+#    #+#             */
/*   Updated: 2026/06/17 13:28:01 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s = str;
		f = to_find;
		while (*s == *f && *f)
		{
			s++;
			f++;
		}
		if (!*f)
			return (str);
		str++;
	}
	return (NULL);
}
