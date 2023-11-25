/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:47:53 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/12 09:35:55 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd )
{
	long long int	number ;

	number = num ;
	if (fd < 0)
		return ;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number *= -1 ;
	}
	if (number < 10)
	{
		ft_putchar_fd(number + '0', fd);
	}
	else if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
}
