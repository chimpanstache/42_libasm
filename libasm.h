/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 13:58:00 by ehafidi           #+#    #+#             */
/*   Updated: 2020/10/20 14:26:12 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

/*
** TESTS
*/
typedef struct	s_params
{
	int			fd;
	int			fd2;
	int			fd3;
	int			fd4;
	char		*s1;
	char		*s2;
}				t_params;

void			test_strcpy(char *s1);
void			test_strcmp(char *s1, char *s2);
void			test_write(int fd, char *str);
void			test_read(int fd, int fd2, int buf, ssize_t count);
void			test_strdup(char *s1);
int				strcpy_routine(int nb, char *test,
				char *(*strcpy)(char *, const char *));
int				ft_strcpy_routine(int nb, char *test,
				char *(*ft_strcpy)(char *, const char *));
int				ft_read_routine(int nb, int fd, size_t count,
				ssize_t (*ft_read)(int, void *, size_t));
int				read_routine(int nb, int fd, size_t count,
				ssize_t (*read)(int, void *, size_t));

/*
** ASM FUNCTIONS
*/
ssize_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s);
int				ft_strcmp(const char *s1, const char *s2);
ssize_t			ft_write(int fd, const void *buf, size_t count);
ssize_t			ft_read(int fd, void *buf, size_t count);
char			*ft_strcpy(char *dest, const char *src);

#endif
