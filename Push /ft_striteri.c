/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:07:25 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/10 10:31:55 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *string, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0 ;
	if (!f || !string)
		return ;
	while (string[index])
	{
		f(index, &string[index]);
		index++;
	}
}
