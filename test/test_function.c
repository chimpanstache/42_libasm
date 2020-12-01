/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 13:19:38 by ehafidi           #+#    #+#             */
/*   Updated: 2020/10/20 15:14:44 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libasm.h"

void	test_strcpy(char *s1)
{
	strcpy_routine(strlen(s1), s1, strcpy);
	ft_strcpy_routine(strlen(s1), s1, ft_strcpy);
	printf("\n");
}

void	test_strcmp(char *s1, char *s2)
{
	printf("ft_strcmp: [%d]\n", ft_strcmp(s1, s2));
	printf("   strcmp: [%d]\n", strcmp(s1, s2));
	printf("\n");
}

void	test_write(int fd, char *str)
{
	printf("ft_write: [%ld]\n", ft_write(fd, str, strlen(str)));
	printf("write:    [%ld]\n", write(fd, str, strlen(str)));
	printf("\n");
}

void	test_read(int fd, int fd2, int buf_size, ssize_t count)
{
	ft_read_routine(buf_size, fd, count, ft_read);
	read_routine(buf_size, fd2, count, read);
	printf("\n");
}

void	test_strdup(char *s1)
{
	printf("ft_strdup: [%s]\n", ft_strdup(s1));
	printf("strdup:    [%s]\n", strdup(s1));
	printf("\n");
}
