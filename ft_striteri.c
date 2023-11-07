/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:07:25 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/07 10:31:34 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

// void	fun(unsigned int index, char *string)
// {	
// 	index = 0 ;
// 	while (string[index])
// 	{
// 		if (string[index] == 'A')
// 		{
// 			string[index] = 'Z' ;
//  		}
// 		index++ ;
// 	}
// 	string[index] =  '\0';
// }
void	ft_striteri(char *string, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0 ;
	while (string[index])
	{
		f(index, &string[index]);
		index++;
	}
}
// int main ()
// {
// 	int num = 0 ;
// 	char string[]  = "asdasdazzAAzz"; ;
// 	char *res ;
// 	ft_striteri(string,fun) ;
// 	printf("%s" , string);
// }