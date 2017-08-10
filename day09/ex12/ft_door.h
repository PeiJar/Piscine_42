/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:22:33 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 09:35:13 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define CLOSE 0
# define OPEN 1
# define TRUE 1

typedef struct	s_door
{
	int			state;
}				t_door;

void			ft_putstr(char *str);
int				is_door_open(t_door *door);
void			close_door(t_door *door);
int				is_door_close(t_door *door);
void			open_door(t_door *door);

#endif
