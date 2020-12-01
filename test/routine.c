/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 13:17:48 by ehafidi           #+#    #+#             */
/*   Updated: 2020/10/20 15:08:29 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libasm.h"

int		strcpy_routine(int nb, char *test,
			char *(*strcpy)(char *, const char *))
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * (nb + 1))))
		return (-1);
	printf("strcpy:    [%s]\n", strcpy(str, test));
	if (str)
		free(str);
	return (0);
}

int		ft_strcpy_routine(int nb, char *test,
			char *(*ft_strcpy)(char *, const char *))
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * (nb + 1))))
		return (-1);
	printf("ft_strcpy: [%s]\n", ft_strcpy(str, test));
	if (str)
		free(str);
	return (0);
}

int		ft_read_routine(int buf_size, int fd, size_t count,
			ssize_t (*ft_read)(int, void *, size_t))
{
	char	*buf;

	if (!(buf = (char*)calloc(sizeof(*buf) * (buf_size + 1), sizeof(*buf))))
		return (-1);
	buf[buf_size + 1] = '\0';
	printf("ft_read: [%ld]\n", ft_read(fd, buf, count));
	printf("strlen(buf): [%ld]\n", strlen(buf));
	printf("buf: [%s]\n\n", buf);
	if (buf)
		free(buf);
	return (0);
}

int		read_routine(int buf_size, int fd, size_t count,
			ssize_t (*read)(int, void *, size_t))
{
	char	*buf;

	if (!(buf = (char*)calloc(sizeof(*buf) * (buf_size + 1), sizeof(*buf))))
		return (-1);
	buf[buf_size + 1] = '\0';
	printf("read: [%ld]\n", read(fd, buf, count));
	printf("strlen(buf): [%ld]\n", strlen(buf));
	printf("buf: [%s]\n", buf);
	if (buf)
		free(buf);
	return (0);
}
