/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:15:07 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/13 13:29:01 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checknum(int num)
{
	if (num < 0)
	{
		return (0);
	}
	return (-1);
}

static int	result(const char *string, int neg)
{
	unsigned long long	res;
	int					digitn;

	res = 0;
	digitn = 0;
	while (*string >= '0' && *string <= '9')
	{
		digitn++;
		res = res * 10 + (*string - '0');
		string++;
		if (digitn == 20)
			return (checknum(neg));
	}
	if (res > LONG_MAX)
		return (checknum(neg));
	return (res * neg);
}

int	ft_atoi(const char *str)
{
	int				index;
	int				negative;

	index = 0;
	negative = 1;
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
		index++ ;
	if (str[index] && (str[index] == '-' || str[index] == '+'))
	{
		if (str[index] == '-')
			negative *= -1 ;
		index++;
	}
	while (str[index] && str[index] == '0')
		index++;
	return (result(str + index, negative));
}
