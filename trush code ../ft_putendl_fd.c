/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:39:12 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/07 10:20:36 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *string, int fd)
{
	if (fd >= 0) 
	{
		ft_putstr_fd(string, fd);
		ft_putchar_fd('\n', fd);
	}
}
