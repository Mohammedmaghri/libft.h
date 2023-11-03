/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:52:32 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/01 09:51:55 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *string)
{
	size_t	index ;

	index = 0 ;
	while (string[index])
	{
		index++;
	}
	return (index);
}
