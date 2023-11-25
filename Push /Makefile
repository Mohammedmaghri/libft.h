# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 10:29:44 by mmaghri           #+#    #+#              #
#    Updated: 2023/11/13 10:22:18 by mmaghri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memcpy.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

OBJS			= $(SRCS:.c=.o) 
CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
NAME			= libft.a

				
all:			$(NAME)

clean:
				$(RM) $(OBJS) 


$(NAME):		$(OBJS) libft.h
				ar rcs $(NAME) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean clean $(NAME)


.PHONY:			all  fclean re bonus clean