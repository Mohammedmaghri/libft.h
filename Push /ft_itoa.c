/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:05:22 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/10 18:31:10 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	thediv(long number)
{
	size_t	counter ;

	counter = 0 ;
	if (number < 0)
	{
		counter++;
		number *= -1 ;
	}
	while (number != 0)
	{
		number /= 10 ;
		counter++ ;
	}
	return (counter);
}

static void	conversion(char *allocation, int lenght, int index, long var)
{
	while (lenght >= index)
	{
		allocation[lenght] = var % 10 + 48;
		var /= 10;
		lenght--;
	}
}

char	*ft_itoa(int number)
{
	long	var;
	int		index ;
	char	*allocation;
	int		lenght;

	var = number;
	index = 0 ;
	lenght = thediv(var);
	if (lenght == 0)
		lenght = 1 ;
	allocation = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!allocation)
		return (NULL);
	allocation[lenght] = '\0';
	lenght-- ;
	if (var < 0)
	{
		var *= -1 ;
		allocation[0] = '-';
		index = 1;
	}
	conversion(allocation, lenght, index, var);
	return (allocation);
}
