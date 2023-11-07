/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:47:16 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/07 09:57:24 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

static size_t	countword(const char *string, char sep)
{
	size_t	index;
	size_t	counter;
	size_t	flag;

	flag = 0;
	counter = 0;
	index = 0;
	while (string[index])
	{
		if (string[index] == sep)
			index++;
		else
		{
			counter++;
			while (string[index] != sep && string[index])
			{
				index++;
			}
		}
	}
	return (counter);
}

static char	*thesubstr(const char *string, size_t size)
{
	size_t	index;
	char	*allocation;

	index = 0;
	allocation = (char *)malloc((size + 1) * sizeof(char)); 
	if (!allocation)
		return (NULL);
	while (index < size)
	{
		allocation[index] = string[index];
		index++;
	}
	allocation[index] = '\0';
	return (allocation);
}

char	**ft_split(const char *string, char sep)
{
	size_t	index;
	size_t	start;
	size_t	end;
	size_t	wordnumber;
	char	**allocation;

	wordnumber = countword(string, sep);
	allocation = (char **)malloc((wordnumber + 1) * sizeof(char *));
	index = 0;
	start = 0;
	end = 0;
	if (!allocation)
		return (NULL);
	while (string[index] && index < wordnumber)
	{
		while (string[end] && string[end] == sep)
			end++;
		start = end;
		while (string[end] && string[end] != sep)
			end++;
		allocation[index] = thesubstr(&string[start], (end - start));
		index++;
	}
	allocation[index] = NULL;
	return (allocation);
}

// int main() {
//     const char string[] = "*ssshss*sssa*sdsd*";
//     char sep = '*';
//     char **res = moving(string, sep);

//     if (res) {
//         for (int i = 0; res[i] != NULL; i++) {
//             printf("String %d: %s\n", i, res[i]);
//             free(res[i]);
//         }
//         free(res);
//     } else {
//         printf("Memory allocation error\n");
//     }

//     return 0;
// }

// static size_t	countword(char const *string, char sep)
// {
// 	size_t	index ;
// 	size_t	conter ;
// 	size_t	flag;

// 	flag = 0;
// 	conter = 0;
// 	index = 0;
// 	while (string[index])
// 	{
// 		if (string[index] == sep)
// 			index++;
// 		else
// 		{
// 			conter++;
// 			while (string[index] != sep && string[index])
// 			{
// 				index++ ;
// 			}
// 		}
// 	}
// 	return (conter);
// }
// static char	*thesubstr(char *string, size_t size)
// {
// 	size_t	index;
// 	char	*allocation ;

// 	index = 0;
// 	allocation = (char *)malloc(sizeof(char) * (size + 1));
// 	if (!allocation)
// 		return (NULL);
// 	while (index < size)
// 	{
// 		allocation[index] = string[index];
// 		index++;
// 	}
// 	allocation[index] = '\0';
// 	return (allocation);
// }
// static char	**moving( char *string, char sep)
// {
// 	size_t	index;
// 	size_t	start;
// 	size_t	end;
// 	size_t wordnumber;
// 	char **allocation; 
// 	wordnumber = countword(string, sep);
// 	allocation = (char **)malloc(sizeof(char *) * (wordnumber + 1));
// 	index = 0 ;
// 	start = 0;
// 	end = 0;
// 		if (!allocation[index])
// 			return (NULL);
// 	while (string[index] && index < wordnumber)
// 	{
// 		while (string[end] && string[end] == sep)
// 			end++;
// 		start = end;
// 		while (string[end] && string[end] != sep)
// 			end++;
// 		allocation[index] = thesubstr(&string[start], (end - start));
// 		start = end ;
// 		index++ ;
// 	}
// 	allocation[index] = NULL;
// 	return (allocation);
// }
// char	**ft_split(char const *string, char sep)
// {
// 	char **mory = moving((char *)string ,sep );

// 	return(mory);
// }
// int main()
// {
// 	char string[] = "*ssshss*sssa*sdsd*";
// 	char sep = '*' ;
// 	char **res ;
// 	res = moving(string, sep);
// 	printf("%s" , res[0]);
// }