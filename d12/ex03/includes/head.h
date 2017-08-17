/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:24:49 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/17 16:56:46 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str, int fd);
void	ft_print_offset(int digits, int number);
int		ft_get_fd(char *file);
int		ft_start_hex_dump(int fd, int curline, int option);
void	ft_print_hex(char c);
char	*ft_strdup(char *str);
int		ft_specialcmp(char *s1, char *s2);
void	ft_same(int fd, char *str, int *offset, int *bytes_read);

#endif
