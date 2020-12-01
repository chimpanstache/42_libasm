/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 13:56:51 by ehafidi           #+#    #+#             */
/*   Updated: 2020/10/26 15:21:47 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libasm.h"

void	test_strlen(char *s1)
{
	printf("ft_strlen: [%ld]\n", ft_strlen(s1));
	printf("   strlen: [%ld]\n", strlen(s1));
	printf("\n");
}

void	display_test(int ind)
{
	if (ind == 1)
		printf("\n////TEST FT_STRLEN////\n");
	else if (ind == 2)
		printf("\n////TEST FT_STRCPY////\n");
	else if (ind == 3)
		printf("\n////TEST FT_STRCMP////\n");
	else if (ind == 4)
		printf("\n////TEST FT_WRITE////\n");
	else if (ind == 5)
		printf("\n////TEST FT_READ////\n");
	else if (ind == 6)
		printf("\n////TEST FT_STRDUP////\n");
}

/*
** void test_strlen(char *s1)
** void test_strcpy(char *s1)
** void test_strcmp(char *s1, char *s2)
** void test_write(int fd, char *str)
** void test_read(int fd, int fd2, int buf, ssize_t count)
** void test_strdup(char *s1)
**
** fd = open("test", O_RDWR);
**
** gcc test/main.c test/routine.c test/test_function.c -L ./ -lasm
*/

int		main(void)
{
	t_params p;

	p.fd = 1;
	p.fd2 = 2;
	p.fd3 = open("put1_zebi.txt", O_RDONLY);
	p.fd4 = open("put1_zebi.txt", O_RDONLY);
	p.s1 = "hello";
	p.s2 = "hello";
	// display_test(1);
	// test_strlen(p.s1);
	// display_test(2);
	// test_strcpy(p.s1);
	// display_test(3);
	// test_strcmp(p.s1, p.s2);
	// display_test(4);
	// test_write(p.fd, p.s1);
	// display_test(5);
	test_read(1, 1, 100, 100);
	display_test(6);
	// test_strdup(p.s1);
	return (0);
}
