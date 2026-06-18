/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pablo_monteiro@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:56:48 by pmonteir          #+#    #+#             */
/*   Updated: 2026/06/18 16:19:07 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_convert_base(char *str, char *base, int base_len)
{
	int	result;
	int	j;

	result = 0;
	while (str[0])
	{
		j = 0;
		while (base[j] && base[j] != str[0])
			j++;
		if (j == base_len)
			return (result);
		result = result * base_len + j;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;

	if (!ft_is_valid_base(base))
		return (0);
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	return (sign * ft_convert_base(str, base, ft_strlen(base)));
}
